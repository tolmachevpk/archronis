#ifndef ARCHRONIS_LZ77_H
#define ARCHRONIS_LZ77_H

#include "read_files.h"
#include "node.h"
#include "compressed_data.h"
#include "write_files_from_archive.h"
#include <iostream>

struct Pair {
    int first;
    int second;
};

class LZ77 {
public:
    LZ77();
    void encode(const std::string &path, const std::string &path_for_archive,
                const std::string &archive_name);
    void decode(const std::string &path, std::string path_to_decoding_result);

private:
    Pair find_matching(const std::string &line, const long long &pos);
    Compressed_data archive;
    int max_buf_size; // 4KB
};

#endif //ARCHRONIS_LZ77_H
