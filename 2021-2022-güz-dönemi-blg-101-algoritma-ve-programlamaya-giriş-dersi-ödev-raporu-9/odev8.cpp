#include <iostream>
#include <locale.h>
#include <time.h>
#include <string.h>

using namespace std;

unsigned long ebob(int x,int y)
{
if(x==0)  
return y;
 
return ebob( y%x, x ); 
}

int main()
{
int a,b,c;
cout << "1.sayiyi giriniz: " << endl;
cin >> a;
cout << "2.sayiyi giriniz: " << endl;
cin >> b;

c = ebob(a,b);

cout << "EBOB: " << c << endl;
 
system("pause");
return 0;
} 
