#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 
 for(int s=1;s<15;s+=1)
 {
         if (s%2!=0)
         cout << "S = " << s << endl;
 }
 
 system("pause"); 
 return 0;
}
