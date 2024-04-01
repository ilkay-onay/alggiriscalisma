#include <iostream>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
srand(time(NULL));

float rastgele[500];

for(int i=0;i<500;i++)
{
rastgele[i] = (rand()%100)/100.0;
cout << rastgele[i] << "  ";
}
system("pause");
return 0;
}
