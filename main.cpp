#include <iostream>
#include "stack.h"

int main() {
    std::string str;
    std::cout << "Masukkan string: ";
    std::cin >> str;

    if (kurungSetangkup(str.c_str()))_1304211009 {
        std::cout << "String Kurung Setangkup" << std::endl;
    } else {
        std::cout << "String Bukan Kurung Setangkup" << std::endl;
    }

    return 0;
}
