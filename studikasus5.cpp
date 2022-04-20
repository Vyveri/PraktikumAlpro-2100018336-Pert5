#include <iostream>
#include <string.h>
using namespace std;

class Operator{
  private:
      int sks, total, mk, nim, tot;
      string matkul,nama, prodi;
      int diskon1,diskon2, ts=0;

  public:
       long input(){
        cout<<"Masukkan Nama Mahasiswa = ";cin>>nama;
        cout<<"Masukkan NIM Mahasiswa  = ";cin>>nim;
        cout<<"Masukkan Prodi          = ";cin>>prodi;
         
        return nim;
        };

        long proses(int ts){
          if (ts>=1){
            total+=120000;
            diskon1=total*10/100;
            diskon2=total*5/100;
            tot=total-(diskon1+diskon2);
            return(proses(ts-1));
          }else{
             return(proses(ts-1));}
            };
          
        long output(){
            cout<<"Nama          : "<<nama<<endl;
            cout<<"NIM           : "<<nim<<endl;
            cout<<"Prodi         : "<<prodi<<endl;
            cout<<"Jumlah SKS    : "<<ts<<endl;
          return (0);
          
        };
};

int main() {
  int mk, sks, ts;
  string matkul;
  Operator run;
  run.input();
  cout<<endl;
  cout<<"Masukkan Jumlah Matkul  = ";cin>>mk;
      for (int i=0; i<mk; i++){
      cout<<endl;
       cout<<"Masukkan MataKuliah     = ";cin>>matkul;
       cout<<"Masukkan SKS            = "; cin >> sks;
       cout<<endl;
       ts+=sks;
      }
  run.proses(ts);
  cout << "Total Biaya SKS : ";
  run.output();
  cout << endl;
  return 0;
} 
