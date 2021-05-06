#ifndef ARCHRONIS_READ_BYTES_H
#define ARCHRONIS_READ_BYTES_H

#include <fstream>

class Read_bytes {
public:
    std::string read(const std::string &name);

private:
    void read_file(std::ifstream &fin, std::string &res); // for only binary mode
    void add_header(std::string &res, const std::string &path);
    std::string int_to_bytes(const unsigned long long &len);
};

#endif //ARCHRONIS_READ_BYTES_H
