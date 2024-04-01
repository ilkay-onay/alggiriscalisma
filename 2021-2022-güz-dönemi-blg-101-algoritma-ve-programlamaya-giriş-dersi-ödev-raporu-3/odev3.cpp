#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 
 int i;
for(i=0;i<100;i++)
{
	if (i%2) i+=10;
	else i+=9;
	cout<<i<<endl;
}
cout<<i;
 
 system("pause");
 
return 0;
}
