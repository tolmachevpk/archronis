#include <iostream>
#include "Headers/lz77.h"

/*
 * Для кодирования сделаю файл, который хранит в 150 байтах название, в 8 байтах размер,
 * дальше уже контент
 */

using namespace std;

int main(int ac, char* av[]) {
    LZ77 lz77 = *(new LZ77);
    if (false) {
        lz77.encode("/Users/Peter/Downloads/27-A-2.txt",
                    "/Users/Peter/CLionProjects/archronis/for_tests", "my_archive.tpk");
    } else {
        lz77.decode("/Users/Peter/CLionProjects/archronis/for_tests/my_archive.tpk",
                    "/Users/Peter/CLionProjects/archronis/for_tests/");
    }
}
