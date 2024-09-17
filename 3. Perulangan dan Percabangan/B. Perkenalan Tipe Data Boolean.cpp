#include <iostream>
using namespace std;

int main() {
    bool ada_yang_dijual = false;

    for (int sisi = 121; sisi <= 125 && ada_yang_dijual == false; sisi+= 1) {
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 != 0;

        if (kelipatan_2 == true && kelipatan_3 == true) {
            ada_yang_dijual = true;
        }
    }

    if (ada_yang_dijual == true) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }
}
