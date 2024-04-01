#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 
 float a, b, c;
 cout<<"a degiskenini giriniz.\n";
 cin>>a;
 cout<<"b degiskenini giriniz.\n";
 cin>>b;
 cout<<"c degiskenini giriniz.\n";
 cin>>c;
 if((a>=20 && !(b>55)|| c<40))
 cout<<"bilgisayar\n";
 else
 cout<<"mühendisligi\n";
 
 system("pause");
 
 return 0;
}
