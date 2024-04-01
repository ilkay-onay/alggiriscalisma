#include <iostream>
#include <locale.h>
#include <time.h>
#include <string.h>

using namespace std;

unsigned long ekok(int x,int y)
{
 static int multiple = 0;
 multiple += y;
 
 if((multiple % x == 0) && (multiple % y == 0))
 {
  return multiple;
 }
 else
 {
  return ekok(x, y);
 }
}

int main()
{
int a,b,c;
cout << "1.sayiyi giriniz: " << endl;
cin >> a;
cout << "2.sayiyi giriniz: " << endl;
cin >> b;

c = ekok(a,b);

cout << "EKOK: " << c << endl;
 
system("pause");
return 0;
} 
