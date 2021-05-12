#include <iostream>
#include <getopt.h>
#include "Headers/lz77.h"

int main(int ac, char* av[]) {
    int rez = 0;
    bool encode = false;
    bool decode = false;
    std::string path_to_file_or_dir;
    std::string path_to_dir_for_data;
    std::string name_for_new_archive = "my_archive";
    while((rez = getopt(ac, av, "edf:p:n:")) != -1) {
        switch (rez) {
            case 'e':
                encode = true;
                break;
            case 'd':
                decode = true;
                break;
            case 'p':
                path_to_dir_for_data = optarg;
                break;
            case 'n':
                name_for_new_archive = optarg;
                break;
            case 'f':
                path_to_file_or_dir = optarg;
                break;
            default:
                perror("bad arguments");
        }
    }

    if (path_to_dir_for_data.empty()) {
        path_to_dir_for_data = std::filesystem::path(path_to_file_or_dir).parent_path().string();
    }

    if (encode && !decode) {
        LZ77 *lz77 = new LZ77();
        lz77->encode(path_to_file_or_dir, path_to_dir_for_data, name_for_new_archive);
        delete lz77;
    } else {
        if (!encode && decode) {
            LZ77 *lz77 = new LZ77();
            lz77->decode(path_to_file_or_dir, path_to_dir_for_data);
            delete lz77;
        } else {
            perror("Choosing mode [e] or [d] fault");
        }
    }
}
