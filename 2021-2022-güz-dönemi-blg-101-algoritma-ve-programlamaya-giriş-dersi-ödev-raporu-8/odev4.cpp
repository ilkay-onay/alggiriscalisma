#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int rast(int a, int b)
{
 int c;
 if(a>b)
 c = b + rand()%(b-a);
 else
 c = a + rand()%(b-a);
 
 return c;
}

int main()
{
int sayi1,sayi2,rastgele;    

srand(time(NULL));

cout << "1. sayiyi giriniz:";
cin >> sayi1; 
cout << endl;
cout << "2. sayiyi giriniz:";
cin >> sayi2; 
cout << endl;

rastgele = rast(sayi1,sayi2);

cout << "Uretilen sayi : " <<  rastgele << endl;
    
system("pause");
return 0;
}
