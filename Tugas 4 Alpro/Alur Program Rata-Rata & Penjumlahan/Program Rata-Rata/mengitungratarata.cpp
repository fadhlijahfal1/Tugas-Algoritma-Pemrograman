#include <iostream>

int main() {
    /*
    Deklarasi Array dan Inisialisasi
    "double nilai" diisi dengan 5 elemen nilai.
    "int jumlahnilai" diisi dengan 5 variabel
    "double totalnilai" diinisialisasi dengan nilai 0.0
    */
    double nilai [] = {90.5, 85.0, 88.5, 92.0,78.0};
    int jumlahnilai = 5;
    double totalnilai = 0.0;


    /*
    Menghitung Total Nilai
    Menggunakan loop "for", program dapat menghitung nilai dengan menjumlahkan setiap elemen array
    */
    for (int i = 0; i < jumlahnilai; ++i) {
        totalnilai += nilai[i];
    }


    /*
    Menghitung Rata-rata Nilai
    dengan membagi "total nilai" dengan "jumlah nilai"
    */
    double ratarata = totalnilai / jumlahnilai;


    /*
    Menampilkan hasil rata-rata nilai
    */
    std::cout << "Total Nilai: " << totalnilai << '\n';
    std::cout << "Rata-rata nilai: " << ratarata << '\n';

    return 0;
}