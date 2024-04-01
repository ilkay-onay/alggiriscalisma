#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;
void sayiuret(int a[50], int b, int c)
{
 srand(time(NULL));
 for(int i=0;i<50;i++)
 {
 if(b>c)
 a[i] = c + rand()%(b-c);
 else
 a[i] = b + rand()%(c-b);
 } 
}  

int main()
{
int a[50],b,c;
cout << "1.sayiyi giriniz: " << endl;
cin >> b;
cout << "2.sayiyi giriniz: " << endl;
cin >> c;
sayiuret(a,b,c);
cout << endl;
for(int i=0;i<50;i++)
cout << " sayi " << a[i] << endl;
    
setlocale(LC_ALL, "Turkish");
system("pause");
return 0;
}
