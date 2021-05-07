#ifndef ARCHRONIS_COMPRESSED_DATA_H
#define ARCHRONIS_COMPRESSED_DATA_H

#include "node.h"
#include "converter_int_bits.h"
#include <iostream>

using namespace std::literals::string_literals;

/*
 * Хранить информацию будем в таком виде: 4 байта - offset, 4 байта - length и 1 байт - next.
 */
class Compressed_data {
public:
    void write_archive(Node* root, const std::string &path, const std::string &filename);
    Node* read_archive(const std::string &path);

private:
    Node* read_node_from_archive(std::ifstream &fin);
    void add_node_to_archive(std::ofstream &fout, Node* node);
    Converter converter;
};

#endif //ARCHRONIS_COMPRESSED_DATA_H
