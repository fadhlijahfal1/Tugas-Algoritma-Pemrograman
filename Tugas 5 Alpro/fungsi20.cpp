#include <iostream>
using namespace std;

long long angka(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * angka(n - 1);
    }
}

int main() {
    int hasil;
    cout << "Masukkan angka: ";
    cin >> hasil;

    cout << hasil << "! = ";
    for (int i = hasil; i >= 1; i--) {
        cout << i;
        if (i != 1) {
            cout << " * ";
        }
    }
    cout << " = " << angka(hasil);
    return 0;
}