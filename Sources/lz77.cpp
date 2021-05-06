#include "../Headers/lz77.h"

LZ77::LZ77() {
    max_buf_size = 4 * 1024;
}

Pair LZ77::find_matching(const std::string &line, const long long &pos) {
    if (pos == 0) {
        return {0, 0};
    }
    long long right = (pos > 0) ? pos - 1 : 0;
    long long left = ((pos - max_buf_size) < 0) ? 0 : (pos - max_buf_size);

    long long i;
    for (i = right; (i >= left) && (line[i] != line[pos]); i--) {}

    if (i >= left) {
        int k = 1;
        while ((line[i + k] == line[pos + k]) && (pos + k < line.length())) {
            k++;
        }
        return {static_cast<int>(pos - i), k};
    } else {
        return {0, 0};
    }
}

void LZ77::encode(const std::string &path) {
    Read_bytes reader;
    long long pos = 1;
    std::string s = reader.read(path);
    if (s.empty()) {
        std::cout << "Have not files to encode.\n";
        exit(0);
    }
    Node* root = new Node(0, 0, s[0]);
    Node* node = root;

    while (pos < s.length()) {
        Pair pair = find_matching(s, pos);
        char c;
        pos += pair.second;
        if (pos < s.length()) {
            c = s[pos];
        } else {
            c = '\0';
        }
        Node* new_node = new Node(pair.first, pair.second, c);
        node->next_node = new_node;
        node = new_node;
        pos += 1;
    }

    //make_archive(root);
}