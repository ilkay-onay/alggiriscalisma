#include <iostream>
#include <string.h>

using namespace std;

struct ozellik
{
float en, uzunluk;
int desenno, ilmeksay;
char kalite;
string iplikcinsi;
};

int main()
{
    
ozellik hali[500];
int arama;

for(int i=0; i<500 ; i++)
{
cout << i+1 << ", Halinin eni: " << endl;
cin >> hali[i].en;
cout << i+1 << ", Halinin uzunlugu: " << endl;
cin >> hali[i].uzunluk;
cout << i+1 << ", Halinin desen no'su: " << endl;
cin >> hali[i].desenno;
cout << i+1 << ", Halinin ilmek sayisi: " << endl;
cin >> hali[i].ilmeksay;
cout << i+1 << ", Halinin iplik cinsi: " << endl;
cin.ignore();
getline(cin,hali[i].iplikcinsi);
cout << i+1 << ", Halinin kalite turu: " << endl;
cin >> hali[i].kalite;
}

cout << "Aramak istediginiz uzunlugu giriniz: " << endl;
cin >> arama;

for(int i; i<500 ; i++)
{
 if(hali[i].uzunluk == arama) 
  cout << i+1 << ". hali aradiginiz uzunluga sahip!" << endl;
}

system("pause");
return 0;
}




