#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
  
 int m, ds, dsm, nk;
  
  cout << "Maasinizi giriniz\n";
  cin >> m;
  
  cout << "Ek ders saatinizi giriniz\n";
  cin >> ds;
  
  if(ds <= 10)
   dsm = ds*10;
  if(10 < ds && ds <= 20)
   dsm = 100 + ds*12;
  if(ds > 20)
   dsm = 225 + ds*14;
  
  nk = m + dsm;
  
  cout << "Net kazanc: " << nk << endl;
  
  system("pause");
 
 return 0;
}
