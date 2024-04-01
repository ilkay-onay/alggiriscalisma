#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;
void yaz()
{
 int rastgele;
 rastgele = rand()%101;
 for(int i=0;i<rastgele;i++)
  cout << "ilkay ";
}  

int main()
{
setlocale(LC_ALL, "Turkish");
srand(time(NULL));
yaz();
system("pause");
return 0;
}
