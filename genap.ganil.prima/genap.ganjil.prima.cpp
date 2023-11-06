#include <iostream>

using namespace std;

int main(){

    int angka;
    cout<< "masukan angka";
    cin>>angka;


    int totalganjil = 0;
    int totalgenap = 0;
    int totalprima = 0;
    int bil;

    cout<<"menentukan bilangan prima,ganjil dan genap"<<endl;
    cout<<"input bilangan : ";
    cout << "Bilangan ganjil antara 1 hingga " << angka << " adalah: ";
        for (int i = 0; i <= angka; i++) {
        if (i % 2 != 0) {
            cout<< i << " ";
            totalganjil += i;
        }
    }
        cout<<"Bilangan genap antara 1 hingga "<<angka<<"adalah:";
         for(int i = 0; i <= angka; i += 2){
            cout << i << " ";
            totalgenap += i;
    }
        cout<<"Bilangan prima antara 1 hingga  "<<angka<<" adalah: ";
        for (int i = 2; i <= angka; i++ ) {
            int j;
            for (j = 2; j * j <= i && i % j != 0; j++) {
            }
            if (j * j > i) {
            cout << i << " ";
            totalprima += i;
            }
        }


        cout<< "Jumlah semua bilangan ganjil antara 1 hingga " << angka <<" adalah: " << totalganjil; //menampilkan hasil penjumlahan dari bilangan ganjil yang ada di atas
        cout<< "Jumlah semua bilangan genap antara 1 hingga " << angka <<" adalah: " << totalgenap; //menampilkan hasil penjumlahan dari bilangan genap yang ada di atas
        cout<< "Jumlah semua bilangan prima antara 1 hingga " << angka <<" adalah: " << totalprima; //menampilkan hasil penjumlahan dari bilangan prima yang ada di atas

        return 0;
}
