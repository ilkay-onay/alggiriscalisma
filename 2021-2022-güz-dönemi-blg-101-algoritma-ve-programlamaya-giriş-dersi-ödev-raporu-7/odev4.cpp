#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

int sayiuret(int x,int y)
{
 int rastgele;
 if(x < y) 
 rastgele = x + rand()%(x-y+1);
 else
 rastgele = y + rand()%(y-x+1);
 
 return rastgele;
}
void sayiuret1(int& a, int b , int c)
{
 if(b < c) 
 a = b + rand()%(b-c+1);
 else
 a = c + rand()%(c-b+1);
 
 cout << "Rastgele uretilen sayi : " << a << endl;
}
int main()
{
setlocale(LC_ALL, "Turkish");
srand(time(NULL));
int sayi1, sayi2, sonuc;

cout << "1. Sayiyi giriniz: ";
cin >> sayi1;
cout << endl;

cout << "2. Sayiyi giriniz: ";
cin >> sayi2;
cout << endl;

cout << "Rastgele uretilen sayi : " << sayiuret(sayi1,sayi2) << endl;
sayiuret1(sonuc,sayi1,sayi2);


system("pause");
return 0;
}
