#include<iostream>
//coding by mzanuar
using namespace std;
int main(){
 //variabel dan array
 //saya membuat penjumlahan
 //matriks 2x2 ygy
 int x,y,m[2][2],n[2][2];
 //angka 2 bisa kamu ganti
 
 //head
 cout << "#Penjumlahan Matrix#" << endl;
 cout << endl;
 
 //input matriks1
 cout<<endl<< "#Matrix1" << endl;
 for(x=0; x<=1; x++){
  for(y=0; y<=1; y++){
   cout << "Input angka Baris"<<x<<"kolom"<<y<<"= ";
   cin>>m[x][y]; //menyimpan data inputan
  };
 };
 cout<<endl<< "#Matrix2#" << endl;
 for (x=0; x<=1; x++){
  for (y=0; y<=1; y++){
   cout << "Input angka Baris"<<x<<",kolom"<<y<<"= ";
   cin>>n[x][y];//menyimpan data yang diinputkan
  }
 }
 //operasi penjumlahan dimulai
 cout<<endl<< "Hasil= " << endl;
 for (x=0; x<=1; x++){
  cout << endl;
  for(y=0; y<=1; y++){
  cout << m[x][y] + n[x][y] <<" ";
  } 
 }
};
