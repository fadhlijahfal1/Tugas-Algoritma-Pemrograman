#include <iostream>
using namespace std;

int main () {
    int nilai [3] = {85, 70, 75};
    int index;

    std::cout << "Index Sebelum: " << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Nilai[" << i << "] = " << nilai [i] << std::endl;
    }

    index = 0;
    nilai [index] = 20;

    std::cout << "Index Setelah: " << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Nilai[" << i << "] = " << nilai[i] << std::endl;
    }

    return 0;
}