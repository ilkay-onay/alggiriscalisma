#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");

 int es, ps, ss, tk, v, nk;
  
  cout << "Ekmek sayisini girin\n";
  cin >> es;
  
  cout << "Pogaca sayisini girin\n";
  cin >> ps;

  cout << "Simit sayisini girin\n";
  cin >> ss;
  
  tk = es*200 + ps*175 + ss*150;
  v = (tk*18)/100;       
  nk = tk + v;
  
  cout << "Kazanciniz: " << nk << " kurus" << endl;
  cout << "Odemeniz gereken vergi: " << v << " kurus" << endl;
  
 system("pause");
 
 return 0;
}
