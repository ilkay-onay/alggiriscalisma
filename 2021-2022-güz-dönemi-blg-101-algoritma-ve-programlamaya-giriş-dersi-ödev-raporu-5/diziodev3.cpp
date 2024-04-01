#include <iostream>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{

srand(time(NULL));

for(int d=0;d<100;d++)
{
 int limit = 2 + (rand()%9);
 
 string harf[limit];
 string kelime="";

 for(int i=0;i<=limit;i++)
 {
  harf[i] = 97 + (rand()%26);
  kelime += harf[i];
 } 
 cout << kelime << endl;
}  
system("pause");
return 0;
}
