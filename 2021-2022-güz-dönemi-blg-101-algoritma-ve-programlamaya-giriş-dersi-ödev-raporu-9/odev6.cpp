#include <iostream>
#include <locale.h>
#include <time.h>
#include <string.h>

using namespace std;

unsigned long basamakyazdir(int A)
{
 if(A>0)
 {
 cout << A%10 << endl;
 return basamakyazdir(A/10);
 } 
 else
 return 0;
}
 
 int main()
 {
 int a;
 cout << "sayi giriniz : " << endl;
 cin >> a;
 basamakyazdir(a);
    
system("pause");
return 0;
} 
