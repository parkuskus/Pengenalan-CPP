#include <iostream>
using namespace std;

int main() {
    int luas[5];

    luas[0] = 225 * 335;
    luas[1] = 215 * 394;
    luas[2] = 198 * 400;
    luas[3] = 314 * 298;
    luas[4] = 299 * 278;

    // Buat sebuah variabel yang menampung luas terbesar.
    int greatest = 0;
    // Pada awalnya, isi variabel tersebut dengan luas dari kandang pertama.
    greatest = luas[0];

    // Untuk setiap kandang sisanya:
    for (int i = 1; i < 5; i++) {
        // Jika luasnya lebih besar daripada variabel luas terbesar:
        if (greatest<luas[i]) {
            // Perbarui nilai variabel luas terbesar dengan luas kandang tersebut.
            greatest = luas[i];
        }
    }

    cout << greatest << endl;
}
