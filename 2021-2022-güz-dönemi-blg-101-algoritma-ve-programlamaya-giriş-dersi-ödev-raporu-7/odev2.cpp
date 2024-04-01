#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;
int denklem1(int i, int s)
{
int sonuc=0;
int temp=0;
for(i; i<=s; i++)
{
temp = 3*i*i + 5*i + 3;  
sonuc += temp;
}
return sonuc;
}
int main()
{
setlocale(LC_ALL, "Turkish");
srand(time(NULL));
int baslangic, bitis, son;

cout << "Toplam islemi yapilacak denklem = 3*x*x + 5*x + 3" << endl;

cout << "Toplam islemi kactan baslayacak? " << endl;
cin >> baslangic;
cout << "Toplam islemi kacta bitecek? " << endl;
cin >> bitis;
son = denklem1(baslangic,bitis);
cout << "Sonuc : " << son << endl;

system("pause");
return 0;
}
