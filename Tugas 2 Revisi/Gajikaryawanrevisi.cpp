#include <iostream>

using namespace std;

int main() {
    
    string nama_pekerja;
    char tingkatan;
    int jam_kerja;
    const int jam_normal = 48;
    const int biaya_a = 5000, biaya_b = 7000, biaya_c = 8000, biaya_d = 10000;
    const int biaya_lembur = 4000;

    cout << "Input Nama Pekerja: ";
    getline(cin, nama_pekerja);

    cout << "Input Tingkatan: ";
    cin >> tingkatan;

    cout << "Input Total Jam Kerja: ";
    cin >> jam_kerja;

    int gaji;

    switch (tingkatan) {
        case 'A':
            gaji = (jam_kerja <= jam_normal) ? jam_kerja*biaya_a : jam_normal*biaya_a+(jam_kerja - jam_normal)*biaya_lembur;
            break;
        case 'B':
            gaji = (jam_kerja <= jam_normal) ? jam_kerja*biaya_b:jam_normal*biaya_b+(jam_kerja - jam_normal)*biaya_lembur;
            break;
        case 'C':
            gaji = (jam_kerja <= jam_normal) ? jam_kerja*biaya_c:jam_normal*biaya_c+(jam_kerja - jam_normal)*biaya_lembur;
            break;
        case 'D':
            gaji = (jam_kerja <= jam_normal) ? jam_kerja * biaya_d:jam_normal*biaya_d+(jam_kerja - jam_normal)*biaya_lembur;
            break;
        default:
            cout << "Tingkatan tidak valid!";
            return 0;
    }

    cout << "Nama Pekerja: " << nama_pekerja << '\n';
    cout << "Gaji Per Minggu: Rp. " << gaji << '\n';

    return 0;
}