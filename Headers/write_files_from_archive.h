#ifndef ARCHRONIS_WRITE_FILES_FROM_ARCHIVE_H
#define ARCHRONIS_WRITE_FILES_FROM_ARCHIVE_H

#include "converter_int_bits.h"
#include <iostream>

using namespace std::literals::string_literals;

class Return_files {
public:
void uncompressed_files(const std::string &path_to_decode, const std::string &s,
                        const std::string &name_of_archived_file);

private:
    Converter converter;
};

#endif //ARCHRONIS_WRITE_FILES_FROM_ARCHIVE_H
