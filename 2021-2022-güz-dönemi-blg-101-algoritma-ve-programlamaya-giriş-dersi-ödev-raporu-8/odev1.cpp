#include <iostream>
#include <string.h>

using namespace std;

int main()
{
 int a = 0;
 string arama, yapistir, cumle = "Programlamak sandigim kadar basit degilmis...";
 cout << cumle << endl;
 cout << "Aramak istediginiz kelime : " << endl;
 while(a == 0)
 {
 getline(cin,arama);
 a = cumle.find(arama);
 if(a == 0)
 cout << "Aradýðýnýz kelime cümle içerisinde yoktur." << endl;
 } 
 cout << arama << " yerine koymak istediginiz kelimeyi giriniz: " << endl;
 cin >> yapistir;
 cumle.replace(a,arama.size(),yapistir);
 
 cout << "Yeni cumle : " << cumle << endl;
 
system("pause");
return 0;
}
