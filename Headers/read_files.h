#ifndef ARCHRONIS_READ_FILES_H
#define ARCHRONIS_READ_FILES_H

#include "converter_int_bits.h"
#include <fstream>

using namespace std::literals::string_literals;

class Read_bytes {
public:
    std::string read(const std::string &name);

private:
    void read_file(std::ifstream &fin, std::string &res); // for only binary mode
    void add_header(std::string &res, const std::string &path);
    Converter converter;
};

#endif //ARCHRONIS_READ_FILES_H
