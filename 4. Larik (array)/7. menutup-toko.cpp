#include <iostream>
using namespace std;

int main() {
    int luas[4][3] = {
        {225 * 335, 299 * 278, 300 * 250},
        {215 * 394, 144 * 718, 300 * 290},
        {200 * 400, 240 * 333, 142 * 619},
        {314 * 298, 411 * 198, 333 * 222}
    };
    
    int harga_total_1 = 0, harga_total_2 = 0, harga_total_3 = 0;
    int harga_jual[3] = {100, 120, 150};
    
    for (int i=0 ; i<4 ; i++) {
        for (int j=0 ; j<3 ; j++){
            if (j==0) {
                harga_total_1 += luas[i][0]*harga_jual[0];
            }
            else if (j==1){
                harga_total_2 += luas[i][1]*harga_jual[1];
            }
            else if (j==2) {
                harga_total_3 += luas[i][2]*harga_jual[2];
            }
        }
    }
    cout << harga_total_1 << endl;
    cout << harga_total_2 << endl;
    cout << harga_total_3 << endl;
} 
