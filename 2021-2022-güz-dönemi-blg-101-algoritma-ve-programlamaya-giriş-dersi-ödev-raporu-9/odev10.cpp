#include <iostream>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <odev.h>

using namespace std;

int main()
{
int a[10],b,c,secim;

cout << "10 tane sayi gireceksiniz." << endl;

for(int i=0;i<10;i++)
{
 cout << i+1 << ". sayiyi giriniz: " << endl;
 cin >> a[i];
}

cout << "ortalama: " << artort(a) << endl;
minmaks(a,b,c);
cout << "minimum: " << c << endl;
cout << "maksimum: " << b << endl;
cout << "tekleri mi ciftleri mi sileyim?[0/1]" << endl;
cin >> secim;

if(secim = 0)
citftler(a);
if(secim = 1)
tekler(a);


cout << "****************************************************************************" << endl;

for(int i=0;i<10;i++)
 cout << a[i] << endl;


setlocale(LC_ALL, "Turkish");
system("pause");
return 0;
}
