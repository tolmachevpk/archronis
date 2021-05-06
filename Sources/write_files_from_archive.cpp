#include <filesystem>
#include <fstream>
#include "../Headers/write_files_from_archive.h"

void Return_files::uncompressed_files(const std::string &path_to_decoding_result, const std::string &s,
                                      const std::string &name_of_archived_file) {
    std::string name_of_dir = name_of_archived_file.substr(0, name_of_archived_file.find('.'));
    std::string cur_dir = path_to_decoding_result;
    if (cur_dir.empty()) {
        cur_dir += name_of_dir;
    } else {
        if (cur_dir[cur_dir.length() - 1] == '/') {
            cur_dir += name_of_dir;
        } else {
            cur_dir += ("/" + name_of_dir);
        }
    }
    std::filesystem::create_directory(cur_dir);
    for(int i = 0; i < s.length();) {
        std::string fname;
        int j;
        for (j = i; (s[j] != '\0') && (j < s.length()); j++) {
            fname.push_back(s[j]);
        }
        j = i + 150;
        if (j >= s.length()) {
            perror("uncompressed_files work uncorrectly");
        }
        std::string fdata_size;
        for (int z = j; z < j + 8; z++) {
            fdata_size.push_back(s[z]);
        }
        long long data_size = converter.bytes_to_val(8, fdata_size);
        j += 8;
        std::ofstream fout;
        fout.open(cur_dir + "/" + fname, std::ios::out | std::ios::binary);
        if (!fout.is_open()) {
            perror("open failed in uncompressed_files function");
        }
        for (int z = j; z < j + data_size; z++) {
            fout.put(s[z]);
        }
        fout.close();
        i = j + data_size;
    }
}
