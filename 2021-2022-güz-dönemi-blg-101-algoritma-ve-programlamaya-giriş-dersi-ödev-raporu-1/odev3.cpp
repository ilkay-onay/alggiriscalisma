#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 
 char bt, s, p;
 int ed, d1, d2;
 
  cout << "1. direncin degerini giriniz:\n";
  cin >> d1;
  cout << "2. direncin degerini giriniz:\n";
  cin >> d2;
  cout << "baglanti tipini giriniz(s veya p)\n";
  cin >> bt;
   
  if(bt == 's')
  {
   ed = d1 + d2;
   cout << "esdeger direnc: " << ed << endl;
 system("pause");
 
 return 0;
 }
  
  if (bt == 'p')
  {
   ed = (d1*d2)/(d1+d2);
   cout << "esdeger direnc: " << ed << endl;
 system("pause");
 
 return 0;
 }
  else
  {
   cout << "Geçersiz baðlantý tipi\n";
    system("pause");
 
    return 0;
    }
}
