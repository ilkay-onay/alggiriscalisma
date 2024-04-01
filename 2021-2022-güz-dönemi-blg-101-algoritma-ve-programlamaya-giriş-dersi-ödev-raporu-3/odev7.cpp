#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 int i, k, t=0, s;
 cout << " `i` degiskenini giriniz.\n";
 cin >> i; 
 cout << " `k` degiskenini giriniz.\n";
 cin >> k;
 
 if(i>k)
 {
 cout << "hatali giris" <<endl;
 system("pause"); 
 return 0;
 }
 
 for(i;i<=k;i++)
 {
 s = 3*i*i*i + 5*i*i + 4;
 t = t + s;
 }
 
 cout << "sonuc = " << t << endl;
 
 system("pause"); 
 return 0;
}
