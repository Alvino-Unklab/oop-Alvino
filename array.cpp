/*
    Array adalah variabel yang dapat menyimpan
    lebih dari satu value dengan tipe data yang sama
*/

#include <iostream>

using namespace std;

int main(){
    int grades[5];

    grades[0] = 90;
    grades[1] = 85;
    grades[2] = 99;
    grades[3] = 70;
    grades[4] = 79;

    cout << "Elemen ke 4 dalam array : " << grades[3] << endl;
    
    return 0;
}