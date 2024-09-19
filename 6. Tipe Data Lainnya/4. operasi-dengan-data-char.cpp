#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "thequickbrownfoxjumpsoverthelazydog";

    for (char c : s) {
        // Ubah huruf kecil menjadi huruf besar
        char huruf = toupper(c);

        // Jika huruf adalah 'Z', ganti dengan 'A'
        if (huruf == 'Z') {
            cout << 'A';
        }
        // Selain itu, ganti dengan huruf selanjutnya
        else {
            cout << char(huruf + 1);
        }
    }

    cout << endl;
}
