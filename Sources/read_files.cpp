#include "../Headers/read_files.h"
#include <iostream>

// Здесь пробовал красивое решение с битовыми операциями, но начиная с (255 << 24) выдавались
// неверные результаты
std::string Read_bytes::int_to_bytes(const long long &len) {
    unsigned long long val;
    val = 256 * 256 * 256;
    val = val * 256 * 256 * 256 * 256;
    unsigned long long byte = 255 * val;
    std::string res;
    for (int i = 7; i >= 0; i--) {
        res.push_back(static_cast<char>( (len & byte) / val));
        val /= 256;
        byte /= 256;
    }
    return res;
}

void Read_bytes::add_header(std::string &res, const std::string &path) {
    std::string filename = std::filesystem::path(path).filename();
    int filename_length = filename.length();
    res.append(filename);
    res.append(std::string(150 - filename_length, '\0'));
    res.append(int_to_bytes(static_cast<long long>(file_size(std::filesystem::path(path)))) );
}

std::string Read_bytes::read(const std::string &name) {
    std::string res;
    std::ifstream fin;

    if (std::filesystem::is_directory(name)) {
        for (const auto & entry: std::filesystem::directory_iterator(name)) {
            if (std::filesystem::is_directory(entry.path())) {
                std::cout << "directory in directory: " << entry.path() << std::endl;
                exit(0);
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
                        std::cout << "You made mistake.\n";
                        exit(0);
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
            std::cout << "file open failed: "  << name << std::endl;
            exit(0);
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
        int c = fin.get();
        if (c == EOF) {
            break;
        }
        res.push_back(static_cast<char>(c));
    }
}