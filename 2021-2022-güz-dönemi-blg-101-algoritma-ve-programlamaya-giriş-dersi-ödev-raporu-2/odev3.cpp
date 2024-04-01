#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");

cout << "*" << endl;
cout << "**" << endl;
cout << "***" << endl;
cout << "****" << endl;
cout << "*****" << endl;
cout << "****" << endl;
cout << "***" << endl;
cout << "**" << endl;
cout << "*" << endl;

cout << endl;
cout << endl;

cout << setw(5) << "*" << endl;
cout << setw(5) << "**" << endl;
cout << setw(5) << "***" << endl;
cout << setw(5) << "****" << endl;
cout << "*****" << endl;
cout << setw(5) << "****" << endl;
cout << setw(5) << "***" << endl;
cout << setw(5) << "**" << endl;
cout << setw(5) << "*" << endl;

system("pause");
return 0;
}
