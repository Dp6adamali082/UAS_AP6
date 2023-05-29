#include <iostream>

using namespace std;

int tambah(int a, int b, int c) {
    return a + b + c;
}

int main() {

    cout << "Hello, world!" << endl;

    if (true) {
        cout << "Ini blok if" << endl;
    } else {
        cout << "Ini blok else" << endl;
    }

    int x = 5;
    cout << "Nilai x: " << x << endl;

    int hasil = tambah(3, 4, 5);
    cout << "Hasil penjumlahan: " << hasil << endl;

    switch (x) {
        case 5:
            cout << "Nilai x adalah 5" << endl;
            break;
        default:
            cout << "Nilai x bukan 5" << endl;
    }

    int* ptr;
    ptr = new int;
    *ptr = 10;

    int y = 5;
    int* nullPtr = nullptr;
    nullPtr = &y;


    int* dynamicPtr = new int;
    *dynamicPtr = 7;
    delete dynamicPtr;
    // *dynamicPtr = 20; -> Ini akan menyebabkan undefined behavior karena pointer telah dihapus

    int arr[5];
    int* arrPtr = arr;
    arrPtr[4] = 10;

    return 0;
}
