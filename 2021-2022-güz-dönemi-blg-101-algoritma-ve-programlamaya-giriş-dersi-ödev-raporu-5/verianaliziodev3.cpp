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

int rastgele[500];
int ort = 0;
while((ort<=20) || (ort >=30))
{
for(int i=0;i<500;i++)
{
rastgele[i] = 10 + (rand()%26);
ort += rastgele[i];
}
ort /= 500;
}

for(int i=0;i<500;i++)
cout << rastgele[i] << "  ";

cout << endl;
cout << "ortalama: " << ort;
cout << endl;

system("pause");
return 0;
}
