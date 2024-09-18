#include <iostream>
using namespace std;

// Fungsi untuk menghitung biaya total berdasarkan jumlah bebek
int biaya(int total_bebek) {
    int harga_bebek;

    // Menentukan harga bebek berdasarkan jumlahnya
    if (total_bebek < 10) {
        harga_bebek = 100000;
    } else if (total_bebek <= 50) {
        harga_bebek = 75000;
    } else {
        harga_bebek = 50000;
    }

    return harga_bebek * total_bebek;
}

// Fungsi untuk menghitung biaya dari jantan dan betina pada hari tertentu
int biaya_jantan_dan_betina(int jantan[], int betina[], int hari) {
    return biaya(jantan[hari]) + biaya(betina[hari]);
}

int main() {
    int jantan[4] = {0, 10, 50, 60};
    int betina[4] = {7, 80, 9, 40};

    // Menghitung biaya untuk 4 hari
    for (int i = 0; i < 4; i++) {
        cout << biaya_jantan_dan_betina(jantan, betina, i) << endl;
    }

    return 0;
}
