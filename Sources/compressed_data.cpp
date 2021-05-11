#include "../Headers/compressed_data.h"
#include <fstream>

void Compressed_data::add_node_to_archive(std::ofstream &fout, Node *node) {
    std::string str_offset, str_length;
    str_offset = converter.val_to_bytes(4, node->offset);
    str_length = converter.val_to_bytes(4, node->length);
    for (int i = 0; i < 4; i++) {
        fout.put(str_offset[i]);
    }
    for (int i = 0; i < 4; i++) {
        fout.put(str_length[i]);
    }
    fout.put(node->next);
}

Node* Compressed_data::read_node_from_archive(std::ifstream &fin) {
    std::string offset = ""s, length = ""s;
    char next;
    for (int i = 0; i < 4; i++) {
        char c;
        if (fin.get(c)) {
            offset.push_back(c);
        } else {
            //perror("EOF read offset in Compressed_data::read_node_from_archive");
            return nullptr;
        }
    }
    for (int i = 0; i < 4; i++) {
        char c;
        if (fin.get(c)) {
            length.push_back(c);
        } else {
            perror("EOF read length in Compressed_data::read_node_from_archive");
            return nullptr;
        }
    }
    char c;
    if (fin.get(c)) {
        next = c;
    } else {
        perror("EOF read next in Compressed_data::read_node_from_archive");
        return nullptr;
    }
    Node* node = new Node(converter.bytes_to_val(4, offset), converter.bytes_to_val(4, length), next);
    return node;
}

Node* Compressed_data::read_archive(const std::string &path) {
    std::ifstream fin;
    fin.open(path, std::ios::in | std::ios::binary);
    if (!fin.is_open()) {
        perror("can't open archive");
    }
    if (fin.eof()) {
        perror("archive was empty");
    }

    if (std::filesystem::file_size(path) % 9 > 0) {
        perror("Check file_size in compressed_dara.cpp (read)");
    }

    Node* root = read_node_from_archive(fin);
    if (root == nullptr) {
        perror("root is nullptr in Compressed_data::read_archive");
    }
    Node* node = root;
    while (!fin.eof()) {
        Node* new_node = read_node_from_archive(fin);
        if (node == nullptr) {
            break;
        }
        node->next_node = new_node;
        node = new_node;
    }
    fin.close();
    return root;
}

void Compressed_data::write_archive(Node *root, const std::string &path,
                                    const std::string &filename) {
    std::ofstream fout;
    std::string final_path = ""s;
    if (path.length() == 0) {
        final_path += filename;
    } else {
        if (path[path.length() - 1] == '/') {
            final_path += path + filename;
        } else {
            final_path += path + "/" + filename;
        }
    }

    fout.open(final_path, std::ios::out | std::ios::binary);
    if (!fout.is_open()) {
        perror("can't create archive");
    }

    Node* node = root;
    while (node != nullptr) {
        add_node_to_archive(fout, node);
        Node *new_node = node->next_node;
        free(node);
        node = new_node;
    }
    fout.close();
    if (std::filesystem::file_size(final_path) % 9 > 0) {
        perror("Check file_size in compressed_dara.cpp (write)");
    }
}
