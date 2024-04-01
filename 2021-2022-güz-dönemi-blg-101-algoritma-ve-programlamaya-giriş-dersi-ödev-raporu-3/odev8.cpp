#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 float t, tt=0, ot=0;
 for(int s=1;s<=70;s++)
 {
 cout << s << ". subenin satis tutarini giriniz:";
 cin >> t;
 
 tt = tt + t;
 }
 ot = tt/70;
 cout << "toplam satis tutari: " << tt << endl;
 cout <<"ortalama satis tutari: " << ot << endl;
 
 system("pause");
 
 return 0;
}
