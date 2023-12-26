#include<iostream>
//coding by m.zanuar f.
//yt:https://youtube.com/@sinauenjoy
//mygit= https://github.com/Soezz?tab=repositories
using namespace std;
int main()
{
    //header
    cout << "##  Penjumlahan Matriks  ##" << endl;
    cout << "=======================================" << endl;

    cout<< endl;
    int x,y,m[2][2],n[2][2];

    cout<<"## Matrix 1 ##"<<endl;
    for (x=0; x<=1; x++) {
        for (y=0; y<=1; y++) {
            cout<<"Masukkan angka (baris"<<x<<",kolom"<<y<<") = ";
            cin>>m[x][y];
        }
    }
    cout<<endl<<"## Matrix 2 ##"<<endl;
    for (x=0; x<=1; x++) {
        for (y=0; y<=1; y++) {
            cout<<"Masukkan angka 2 (baris"<<x<<",kolom"<<y<<") = ";
            cin>>n[x][y];
        }
    }
    cout<<endl<<"## Hasil Jumlah ##"<<endl;
    for (x=0; x<=1; x++) {
        cout<<endl;
        for (y=0; y<=1; y++) {
            cout<<m[x][y]+n[x][y]<<" ";
        }
    }
    return 0;
}
