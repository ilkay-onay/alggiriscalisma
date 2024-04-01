#include <iostream>
#include <locale.h>
#include <time.h>
#include <string.h>

using namespace std;

unsigned long basamaktopla(int A)
{
 if (A == 0)
    return 0;
    return (A%10 + basamaktopla(A/10));
}
 
 int main()
 {
 int a,sonuc;
 cout << "sayi giriniz : " << endl;
 cin >> a;
 sonuc = basamaktopla(a);
 cout << "Yeni sayi :" << sonuc << endl;    
system("pause");
return 0;
} 
