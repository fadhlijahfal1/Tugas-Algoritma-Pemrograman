#include <iostream>

int main() {
    int matriks_kaliA[2][2] = {{2, 8}, {3, 6}};
    int matriks_kaliB[2][2] = {{12, 14}, {9, 10}};
    int hasil[2][2];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriks_kaliA[i][j] * matriks_kaliB[i][j];
        }
    }

    std::cout << "Hasil Perkalian Matriks:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << hasil[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}