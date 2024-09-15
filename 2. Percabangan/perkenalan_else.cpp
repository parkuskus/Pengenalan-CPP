#include <iostream>
using namespace std ;

int main() {
    int jantan = 67, betina = 98;
    int total = jantan+betina ;

    if (total % 2 == 0) {
        cout << "total banyaknya bebek adalah bilangan genap" << endl ;
    } else {
        cout << "total banyaknya bebek adalah bilangan ganjil" << endl ;
    }
}