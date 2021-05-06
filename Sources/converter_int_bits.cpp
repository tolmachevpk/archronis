#include "../Headers/converter_int_bits.h"

std::string Converter::val_to_bytes(const int &size, const long long &number) {
    unsigned long long val = 1;
    for (int i = 0; i < size - 1; i++) {
        val *= 256;
    }
    unsigned long long byte = 255 * val;
    std::string res;
    for (int i = (size - 1); i >= 0; i--) {
        res.push_back(static_cast<unsigned char>( (number & byte) / val));
        val /= 256;
        byte /= 256;
    }
    return res;
}

long long Converter::bytes_to_val(const int &size, const std::string &line) {
    unsigned long long res = 0;
    for (int i = 0; i < size; i++) {
        res = res * 256 + static_cast<long long>(static_cast<unsigned char>(line[i]));
    }
    if (res < 0) {
        perror("minus with ull");
    }
    return res;
}
