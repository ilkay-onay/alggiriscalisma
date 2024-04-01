#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
int ciro[5,12];
int ortciro [5,1];
int yil;
int ilk;
int ilkorta;
int sonorta;
int son;
srand(time(NULL));


for(int j=0;j<5;j++)
{
 for(int k=0;k<12;k++)
 {
  ciro[j,k] = 100 + rand()%4901;
  
 }
ortciro[j,0] = (ciro[j,0] + ciro[j,1] + ciro[j,2] + ciro[j,3] + ciro[j,4] + ciro[j,5] + ciro[j,6] + ciro[j,7] + ciro[j,8] + ciro[j,9] + ciro[j,10] + ciro[j,11])/12;
} 
cout << "yil giriniz:";
cin >> yil;
cout << endl;

for(int k=0;k<12;k++)
 if(ciro[yil,k] > ortciro[yil,0])
  cout << k << ". ayda ortalama ciro asildi ve ciro " << ciro[yil,k] << " idi." << endl;

ilk = (ciro[yil,0] + ciro[yil,1] + ciro[yil,2])/3;
ilkorta = (ciro[yil,3] + ciro[yil,4] + ciro[yil,5])/3;
sonorta = (ciro[yil,6] + ciro[yil,7] + ciro[yil,8])/3;
son = (ciro[yil,9] + ciro[yil,10] + ciro[yil,11])/3;

cout << "sectiginiz yilin ilk ceyregindeki ciro ortalamasi: " << ilk << endl;
cout << "sectiginiz yilin ikinci ceyregindeki ciro ortalamasi: " << ilkorta << endl;
cout << "sectiginiz yilin ucuncu ceyregindeki ciro ortalamasi: " << sonorta << endl;
cout << "sectiginiz yilin son ceyregindeki ciro ortalamasi: " << son << endl; 
system("pause");
return 0;
}
