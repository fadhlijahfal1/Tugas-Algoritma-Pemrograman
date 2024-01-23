#include <iostream>
using namespace std;

int main() {
    /*
    Deklarasi dan insialisasi Matriks
    "matriksA" dan "matriksB" dideklarasikan dengan nilai tertentu
    "hasil"  dideklarasikan untuk menyimpan hasil penjumlahan
    */
    int matriksA[2][2] = {{4, 8}, {2, 6}};
    int matriksB[2][2] = {{10, 12}, {9, 10}};
    int hasil[2][2];


    /*
    Penjumlahan Matriks
    menggunakan loop "for" program menjumlahkan dengan setiap elemen input matriks, dan menyimpan hasilnya pada matriks "hasil"
    */
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }


    /*
    Tampilan hasil penjumlahan matriks
    */
    std::cout << "Hasil Penjumlahan Matriks:\n";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << hasil[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}