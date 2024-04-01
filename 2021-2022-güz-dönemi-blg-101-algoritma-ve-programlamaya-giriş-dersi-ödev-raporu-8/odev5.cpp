#include <iostream>
#include <string.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main()
{
int bilgisayarzar, oyuncuzar, deneme = 0;
char tus;

srand(time(NULL));
bilgisayarzar = 1 + rand()%6;

while(bilgisayarzar != oyuncuzar)
{
tus = getch();

if(tus == 'z')
 {
  deneme +=1;
  oyuncuzar = 1 + rand()%6;
 }
}

cout << deneme << ". denemede zari dogru tutturdunuz!" << endl;
       
system("pause");
return 0;
}
