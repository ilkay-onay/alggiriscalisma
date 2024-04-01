#include <iostream>
#include <locale.h>
#include <time.h>
#include <conio.h>

using namespace std;

float artort(int a[10])
{
int toplam=0;
float ortalama;
for(int i=0;i<10;i++)
toplam += a[i];
ortalama = toplam / 10;
return ortalama;
}
void minmaks(int a[10], int& b, int& c) 
{
int temp;
	for(int i=0; i<10; i++)
    {
		for(int j=0; j<9; j++)
        {
			if(a[j] < a[j+1])
            {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
    }
    b = a[0];
    c = a[9]; 
}

void citftler(int a[10])
{
for(int i=0; i<10; i++)
{
    if(a[i]%2 == 1)
    a[i] = 0;
}
}
void tekler(int a[10])
{
    for(int i=0; i<10; i++)
{
    if(a[i]%2 == 0)
    a[i] = 0;
}
}
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
