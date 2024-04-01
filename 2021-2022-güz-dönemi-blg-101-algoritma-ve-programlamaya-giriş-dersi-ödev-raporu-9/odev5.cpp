#include <iostream>
#include <locale.h>
#include <time.h>
#include <string.h>

using namespace std;
void terstenyaz(string& cumle)
{
 string tersten(cumle.rbegin(), cumle.rend());
 cumle = tersten;
}

int main()
{
setlocale(LC_ALL, "Turkish");
string CUMLE;
cout << "Cumle giriniz :" << endl;
getline(cin, CUMLE);
terstenyaz(CUMLE);
cout << "Yeni cumle :" << endl;
cout << CUMLE << endl;
     
system("pause");
return 0;
}
