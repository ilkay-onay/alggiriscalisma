#include <iostream>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
srand(time(NULL));

int rastgele[10];
int temp;
int tek[5];
int cift[5];
int k = 0;
int l = 0;
int ortk[5];
int ortb[5];
float ort;

for(int i=0;i<5;i++)
{
 tek[i] = 0;
 cift[i] = 0;
 ortk[i] = 0;
 ortb[i] = 0;
}

for(int i=0;i<10;i++)
{
rastgele[i] = rand()%11;
cout << "1.sayi = " << rastgele[i] << " | ";
ort += rastgele[i];
}
ort = ort/10;
cout << endl;
cout << "Sayilarin ortalamasi = " << ort << endl;

for(int i=0; i<11; i++)
{
 for(int j=0; j<11; j++)
 {
  if(rastgele[i] < rastgele[j])
  {
	temp = rastgele[i];
	rastgele[i] = rastgele[j];
	rastgele[j] = temp;
  }
 }
}
cout << "en buyuk sayi : " << rastgele[0] << endl;
cout << "en kucuk sayi : " << rastgele[9] << endl;
 for(int i=0;i<10;i++)
 {
 if( rastgele[i]%2 != 0)
  {
  tek[k] = rastgele[i];
  k += 1;
  }  
 else
  {
  cift[k] = rastgele[i];
  l += 1;
  }  
 }
cout << "tek sayilar :";
for(int i=0;i<5;i++)
cout << tek[i] << " ";

cout << endl << "cift sayilar :";
for(int i=0;i<5;i++)
cout << cift[i] << " ";

cout << endl;

k = 0;
l = 0;

for(int i=0;i<10;i++)
{
 if(rastgele[i] < ort)
 { 
  ortk[k] = rastgele[i];
  k +=1;
 }   
 else
 {
  ortb[l] = rastgele[i];
  k +=1;
 }
}

cout << "ortalamadan kucuk sayilar :";
for(int i=0;i<5;i++)
cout << ortk[i] << " ";

cout << endl << "ortalamadan buyuk sayilar :";
for(int i=0;i<5;i++)
cout << ortb[i] << " ";


system("pause");
return 0;
}
