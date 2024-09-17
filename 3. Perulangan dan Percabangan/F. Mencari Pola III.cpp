#include <iostream>
using namespace std;

int main() {
    int N = 10;
    int counter = N;
    for (int i = 1; i <= N; i++) {
        for (int j = 1 ; j <= N ; j++) {
            if (j==i) {
                cout << "*";
                
            }
            else if (j==counter){
                cout << "*" ;
                counter -= 1;
            }
            else {
                cout << ".";
            }
        }cout << endl;
    }
}
