// Program Mencetak Pola Segitiga Bintang
#include <iostream>
using namespace std;

int main(){

    // Deklarasi Variabel
    int i, j;

    // Segitiga Bintang Naik
    for (i = 1; i <= 4; i++){
        for(j = 1; j <= i; j++){
            cout << "*";
        } cout << endl;
    }

    cout << endl;

    // Segitiga Bintang Turun
    for(i = 4; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << "*";
        } cout << endl;
    }

    return 0;
}