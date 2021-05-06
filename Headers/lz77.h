#ifndef ARCHRONIS_LZ77_H
#define ARCHRONIS_LZ77_H

#include "read_files.h"
#include "node.h"
#include <iostream>

struct Pair {
    int first;
    int second;
};

class LZ77 {
public:
    LZ77();
    void encode(const std::string &path);
    void decode(const std::string &path);

private:
    Pair find_matching(const std::string &line, const long long &pos);
    void make_archive(const Node* node);
    int max_buf_size; // 4KB
};

#endif //ARCHRONIS_LZ77_H
