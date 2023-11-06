#include <iostream>

using namespace std;

int main(){
    int a, a1=0, a2=1, angka_selanjutnya = 0;
    cout<<"jumlah deret fibonacii yang dimasukan";
    cin>> a;

    for(int i = 1; i <=a; i++) {
        if(i == 1) {
            cout << a1 << " ";
            continue;
        }
        if(i == 2) {
            cout << a2 << " ";
            continue;
        }
        angka_selanjutnya = a1 + a2;
        a1 = a2;
        a2 = angka_selanjutnya;

        cout << angka_selanjutnya << " ";
    }

  cout << endl;
  return 0;
}
