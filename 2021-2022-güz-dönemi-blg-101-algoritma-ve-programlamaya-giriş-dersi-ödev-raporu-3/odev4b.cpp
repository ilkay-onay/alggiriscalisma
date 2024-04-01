#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
int sayi;
cin>>sayi;

for(int i=1;i<10;i+=2)
{
    if (sayi%i!=0) break;
    cout<<i<<sayi<<endl;
}
 system("pause");
 
 return 0;
}
