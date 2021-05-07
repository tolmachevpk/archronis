#ifndef ARCHRONIS_CONVERTER_INT_BITS_H
#define ARCHRONIS_CONVERTER_INT_BITS_H

#include <iostream>

using namespace std::literals::string_literals;

class Converter {
public:
    std::string val_to_bytes(const int &size, const long long &number);
    long long bytes_to_val(const int &size, const std::string &line);
};

#endif //ARCHRONIS_CONVERTER_INT_BITS_H
