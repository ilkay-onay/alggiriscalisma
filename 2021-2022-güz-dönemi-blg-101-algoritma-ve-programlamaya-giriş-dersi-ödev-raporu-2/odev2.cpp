#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
float sn, no, y;

 cout << "Suanki nufusu giriniz: ";
 cin >> sn;
 cout << "Yýllýk ortalama nüfus artýþ oranýni giriniz: ";
 cin >> no;
 cout << "Yil miktarini giriniz: ";
 cin >> y;
 
 for (int s=1; s<=y;s++)
 {
  sn = sn + sn*no;
 }
 
 cout << y << " yil sonraki nufus: " << sn << endl;
 
system("pause");
return 0;
} 
