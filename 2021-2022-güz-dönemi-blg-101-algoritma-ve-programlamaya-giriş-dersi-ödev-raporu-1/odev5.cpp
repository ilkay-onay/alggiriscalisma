#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 
 int s, y, o, b;
  
  cout << "sayi giriniz\n";
  cin >> s;
  
  y = s/100;
  s = s - (y*100);
  o = s/10;
  s = s - (o*10);
  b = s;
  
  cout << "Yuzler basamagi: " << y << endl;  
  cout << "Onlar basamagi: " << o << endl; 
  cout << "Birler basamagi: " << b << endl;
   
  system("pause");
 
 return 0;
}
  
