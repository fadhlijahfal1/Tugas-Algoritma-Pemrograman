#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //Input waktu mulai dan akhir penggunaan
    int A1, A2;
    cout << "Masukan waktu mulai penggunaan (jam): ";
    cin >> A1;
    cout << "Masukan waktu akhir penggunaan (jam): ";
    cin >> A2;

    //Hitung durasi penggunaan dan biaya total
    int jam, sisa_detik, menit;
    jam = (A1-A2) / 3600;
    sisa_detik = (A1-A2) % 3600;
    menit = sisa_detik / 60 ;
    sisa_detik %=60;

    int biaya = jam * 5000;

    //Tampilkan Hasil
    cout << "Durasi Penggunaan: " << jam << "jam, " << menit << "menit, dan " << sisa_detik << "detik" << endl;
    cout << "Biaya Total: Rp" << biaya << endl;

    return 0;
}