#include <iostream>
#include <cmath>

int main() {
    double jarijari;
    const double PI = M_PI;

    std::cout << "Masukkan Jari-Jari Lingkaran:";
    std::cin >> jarijari;

    double luas = PI * pow(jarijari, 2);

    double keliling = 2 * PI * jarijari;

    std::cout << "Luas Lingkaran:" << luas << std::endl;
    std::cout << "Keliling Lingkaran:" << keliling << std::endl;

    return 0;
}