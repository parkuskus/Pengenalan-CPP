#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk menghitung jumlah elemen yang bersebelahan
vector<int> jumlah_bersebelahan(vector<int> v) {
    vector<int> hasil;

    // Loop untuk menjumlahkan elemen yang bersebelahan
    for (int i = 0; i < v.size() - 1; i++) {
        hasil.push_back(v[i] + v[i + 1]);
    }

    return hasil;
}

// Fungsi untuk mencetak vector
void print_vector(const vector<int>& v) {
    cout << "{";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i < v.size() - 1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

int main() {
    // Kasus uji 1: jumlah_bersebelahan({1, 2, 3, 4, 5})
    vector<int> hasil1 = jumlah_bersebelahan({1, 2, 3, 4, 5});
    print_vector(hasil1);

    // Kasus uji 2: jumlah_bersebelahan({17, 8, 1945})
    vector<int> hasil2 = jumlah_bersebelahan({17, 8, 1945});
    print_vector(hasil2) ;
}
