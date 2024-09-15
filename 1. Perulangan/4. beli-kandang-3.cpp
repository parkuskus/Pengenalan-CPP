#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int total_luas_kandang = luas_kandang;
    int i = 0 ;

    while (i<10) {
        luas_kandang += 7 ;
        total_luas_kandang += luas_kandang;
        i += 1;
    }

    cout << total_luas_kandang << endl;
}