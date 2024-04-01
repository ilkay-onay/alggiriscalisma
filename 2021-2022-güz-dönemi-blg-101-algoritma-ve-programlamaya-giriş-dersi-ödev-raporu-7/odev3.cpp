#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

long netnufus(long anufus, float aoran, int ayil)
{
for(int i=0;i<ayil;i++)
anufus += anufus*aoran;
return anufus;
}

int main()
{
setlocale(LC_ALL, "Turkish");

long nufus;
float oran;
int yil;

cout << "Sehrin simdiki nufusu: ";
cin >> nufus;
cout << endl;
cout << "Sehrin yillik nufus artisi: ";
cin >> oran;
cout << endl;
cout << "Sehrin nüfusu hesaplanmak istenen süre(yil): ";
cin >> yil;
cout << endl;

cout << "Sehrin " << yil << " yil sonraki nufusu: ";
cout << netnufus(nufus,oran,yil);
cout << endl;

system("pause");
return 0;
}
