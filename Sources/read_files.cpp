#include "../Headers/read_files.h"
#include <iostream>

void Read_bytes::add_header(std::string &res, const std::string &path) {
    std::string filename = std::filesystem::path(path).filename();
    int filename_length = filename.length();
    res.append(filename);
    res.append(std::string(150 - filename_length, '\0'));
    res.append(converter.val_to_bytes(8,
                                      static_cast<long long>(file_size(std::filesystem::path(path)))) );
}

std::string Read_bytes::read(const std::string &name) {
    std::string res = ""s;
    std::ifstream fin;

    if (std::filesystem::is_directory(name)) {
        for (const auto & entry: std::filesystem::directory_iterator(name)) {
            if (std::filesystem::is_directory(entry.path())) {
                perror("directory in directory");
            }

            fin.open(entry.path(), std::ios::binary | std::ios::in);
            if (!fin.is_open()) {
                char status;
                std::cout << "file open failed: "  << entry.path() <<
                    "\nPress [c] to continue or [e] to exit program: ";
                std::cin >> status;
                if (status == 'e') {
                    exit(0);
                } else {
                    if (status == 'c'){
                        continue;
                    } else {
                        perror("You made mistake");
                    }
                }
            } else {
                add_header(res, (std::string &) entry.path());
                Read_bytes::read_file(fin, res);
            }
            fin.close();
        }
        return res;
    } else {
        fin.open(name, std::ios::binary | std::ios::in);
        if (!fin.is_open()) {
            perror("file open failed");
        } else {
            add_header(res, name);
            Read_bytes::read_file(fin, res);
        }
        fin.close();
    }

    return res;
}

void Read_bytes::read_file(std::ifstream &fin, std::string &res) {
    for (;;) {
        char c;
        if (fin.get(c)) {
            break;
        }
        res.push_back(c);
    }
}