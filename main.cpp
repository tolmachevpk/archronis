#include <iostream>
#include "Headers/lz77.h"
#include <fstream>

/*
 * Для кодирования сделаю файл, который хранит в 150 байтах название, в 8 байтах размер,
 * дальше уже контент
 */

using namespace std;

int main() {
    LZ77 lz77 = *(new LZ77);
    lz77.encode("asdasdas");

}
