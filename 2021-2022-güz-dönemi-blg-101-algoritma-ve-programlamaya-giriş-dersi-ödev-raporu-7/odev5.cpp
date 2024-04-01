#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void esdeger(float& d, float& e, float a, float b, float c) 
{
d = a + b + c;
cout << "Seri direnc : " << d << endl;
e = 1/((1/a)+(1/b)+(1/c));
cout << "Paralel direnc : " << e << endl;
}
int esdeger1(float& t , float x , float y, float z) 
{
if(t != x+y+z)
t = x + y + z;
else
t = 1/((1/x)+(1/y)+(1/z));
return t;
}
int main()
{
setlocale(LC_ALL, "Turkish");

float sonuc1, direnc1, direnc2, direnc3;
float sonuc;
cout << "1. direnci giriniz: ";
cin >> direnc1;
cout << endl;
cout << "2. direnci giriniz: ";
cin >> direnc2;
cout << endl;
cout << "3. direnci giriniz: ";
cin >> direnc3;
cout << endl;

esdeger(sonuc1, sonuc,direnc1,direnc2,direnc3);
cout << "Seri esdeger direnc : " << esdeger1(sonuc,direnc1,direnc2,direnc3) << endl;
cout << "Paralel esdeger direnc : " << esdeger1(sonuc,direnc1,direnc2,direnc3) << endl;

system("pause");
return 0;
}
