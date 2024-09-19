#include <iostream>
#include <string>
#include <vector>
using namespace std;

string kalkulator(char op, vector<string> data) {
    if (data.empty()) {
        return "0";
    }
    
    long long hasil_kali = 1; // Mulai dari 0 untuk penjumlahan, 1 untuk perkalian
    long long hasil_tambah = 0 ;
    
    for (string& s : data) {
        long long angka = stoi(s);  // Konversi string ke bilangan bulat
        
        if (op == '+') {
            hasil_tambah += angka;
        } else if (op == '*') {
            hasil_kali *= angka;
        } else {
            return "KESALAHAN";  // Jika operator tidak valid
        }
    }
    
    if (hasil_tambah == 0) {
        return to_string(hasil_kali);  // Ubah hasil akhir kembali ke string
    }
    else if (hasil_kali == 1){
        return to_string(hasil_tambah);
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"}) << endl;
    cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
    cout << kalkulator('*', {"17", "8", "1945"}) << endl;
    cout << kalkulator('?', {"3", "2", "1"}) << endl;
}
