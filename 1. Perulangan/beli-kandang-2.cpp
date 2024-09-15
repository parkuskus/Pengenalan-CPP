#include<iostream>
using namespace std ;

int main(){
    int luas_kandang = 12, i = 0 ;
    
    while (i<3){
        luas_kandang = luas_kandang+7;
        cout << i+1 << ": " << luas_kandang << endl;
        i += 1;
    }
}