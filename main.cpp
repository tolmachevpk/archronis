#include <iostream>
#include "Headers/read_bytes.h"
#include <fstream>

/*
 * Для кодирования сделаю файл, который хранит в 150 байтах название, в 8 байтах размер,
 * дальше уже контент
 */

using namespace std;

int main() {
    Read_bytes reader;
    string s;
    s = reader.read("/Users/Peter/CLionProjects/archronis/for_tests");
    cout << s << endl;
}
