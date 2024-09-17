#include <iostream>
using namespace std;

int main() {
    bool lampu[101];
    int banyak = 0 ;

    // Pada mulanya, seluruh lampu dalam kondisi mati.
    for (int i = 1; i <= 100; i++) {
        lampu[i] = false;
    }

    // Untuk setiap jam (pukul p),
    for (int p = 1 ; p<= 10 ; p++) {
        // untuk setiap lampu nomor i,
        for (int i = 1 ; i<= 100 ; i++) {
            // jika i merupakan kelipatan p,
            if (i % p == 0 && lampu[i] == false) {
                // tekan saklarnya.
                lampu[i] = true;
            }
            
            else if (i % p == 0 && lampu[i] == true) {
                lampu[i] = false;
            }
            
        }
    }
    
    
    // Hitung banyaknya lampu yang menyala,
    for (int i=1 ; i<= 100 ; i++) {
        if (lampu[i] == true){
            banyak += 1;
        }
    }

    // lalu cetak.
    cout << banyak << endl;
}
