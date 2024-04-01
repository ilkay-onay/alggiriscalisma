#include <iostream>
#include <locale.h>
#include <conio.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
int i; char t; int s=0;
for(i=10;i>-10;--i)
{
	t=getche();
	if (t=='a') s++;
              if (s==3) break;
} 
 
 system("pause");
 
return 0;
}
