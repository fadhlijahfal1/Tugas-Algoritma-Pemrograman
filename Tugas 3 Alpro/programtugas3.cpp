#include <iostream>
using namespace std;

int main() {
    int bilangan_positif;
    cout << "Input bilangan bulat positif: ";
    cin >> bilangan_positif;

    if (bilangan_positif <= 0) {
        cout << "Bilangan tidak valid." << endl;
    } else {
        if (bilangan_positif % 2 == 1) {
            cout << "Angka adalah Bilangan ganjil: ";
            for (int i = 1; i <= bilangan_positif; i += 2) {
                cout << i << " ";
            }
            cout << endl;
        } else {
            cout << "Angka adalah Bilangan Genap ";
            for (int i = 1; i <= 5; i++) {
                cout << " ";
            }
        }
    }

    return 0;
}