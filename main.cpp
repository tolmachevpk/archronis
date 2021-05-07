#include <iostream>
#include <cstring>
#include "Headers/lz77.h"

/*
 * Для кодирования сделаю файл, который хранит в 150 байтах название, в 8 байтах размер,
 * дальше уже контент
 */

using namespace std;

int main(int ac, char* av[]) {
    if (ac == 1) {
        perror("too little arguments");
    }
    if (strcmp(av[1], "e") == 0) {
        if (ac == 5) {
            string path_to_file_or_dir = av[2];
            string path_to_dir_for_archive = av[3];
            string name_for_new_archive = av[4];

            LZ77 *lz77 = new LZ77();
            lz77->encode(path_to_file_or_dir, path_to_dir_for_archive, name_for_new_archive);
            delete lz77;
        } else {
            perror("wrong amount of arguments");
        }
    } else {
        if (strcmp(av[1], "d") == 0) {
            if (ac == 4) {
                string path_to_archive = av[2];
                string path_for_decode_data = av[3];

                LZ77 *lz77 = new LZ77();
                lz77->decode(path_to_archive, path_for_decode_data);
                delete lz77;
            } else {
                perror("wrong amount of arguments");
            }
        } else {
            perror("was't choose mode [e] or [d]");
        }
    }
}
