#include "iostream"
#include "conio.h"
using namespace std;
int main ()
{
int Gapok, Tunj, nBulan, Gaber, TotalGaji, JumGaber;
float Pajak,BPJS;
char Nama[30];

cout<< "Nama Karyawan : "; cin>>Nama;
cout<< "Banyak Bulan : "; cin>>nBulan;

Gapok = 1500000;
Tunj = 500000 ;
TotalGaji = Gapok + Tunj;
Pajak = 0.05 * TotalGaji;
BPJS = 0.03 * TotalGaji;


Gaber = TotalGaji - Pajak - BPJS;

JumGaber = Gaber * nBulan;

cout<< "==========================\n";
cout<< "Nama Karyawan : " <<Nama<< "\n";
cout<< "Gaji Pokok : " <<Gapok<<"\n";
cout<< "Tunjangan : " <<Tunj<< "\n";
cout<< "BPJS : " << BPJS << "\n";
cout<< "Pajak : " <<Pajak<<"\n";
cout<< "Selama : " <<nBulan<<"\n";
cout<< "==================================\n";
cout<< "GajiBersih : " <<Gaber<<"\n";
cout<< "==================================\n";
cout<< "Total Gaji : " <<JumGaber<<"\n";
getch();

}
