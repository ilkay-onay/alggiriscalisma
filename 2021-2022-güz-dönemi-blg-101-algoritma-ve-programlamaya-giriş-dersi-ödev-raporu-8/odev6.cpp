#include <iostream>
#include <string.h>
#include <time.h>
#include <conio.h>

using namespace std;

int pirizma(int& x, int& y, int a, int b, int c)
{
x = 2*(a*b + a*c + b*c);
y = a*b*c;
}

int main()
{
int alan=0,hacim=0,a,b,c;

cout << "prizmanin 1.kenarini giriniz" << endl;   
cin >> a;
cout << "prizmanin 2.kenarini giriniz" << endl;   
cin >> b;
cout << "prizmanin 3.kenarini giriniz" << endl;   
cin >> c;

pirizma(alan,hacim,a,b,c);

cout << "Prizmanin alani : " << alan << endl;
cout << "Prizmanin hacmi : " << hacim << endl;
    
    
system("pause");
return 0;
}
