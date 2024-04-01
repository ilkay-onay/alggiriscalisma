#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");

int s=1, sa;
float hs, st=0, so;

  cout << "Girmek istediginiz sayi miktarini giriniz: ";
  cin >> sa;
  cout  << endl;
  
  for (s; s<=sa; s++)
  {
      cout << s << ".sayiyi giriniz.";
      cin >> hs;
      st = st + hs;
  }
  
  so = st/sa;
  
  cout << "Girdiginiz sayilarin toplami: " << st << endl;
  cout << "Girdiginiz sayilarin ortalamasi: " << so << endl; 

system("pause");
return 0;
}
  
