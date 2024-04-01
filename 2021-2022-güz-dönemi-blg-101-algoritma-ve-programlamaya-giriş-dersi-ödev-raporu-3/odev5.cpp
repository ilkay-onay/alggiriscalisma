#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 float x=5, y=2, z=3, i=3;
 for(i;i>0;i-=1)
 {
                x-=1;
                if(x==2)
                x=x*2;
                else
                {
                x=x+y-z;
                z+=1;
                y=y*2;
                }
                cout<< "x = " << x << " y = " << y << " z = " << z << endl;
}
 system("pause");
 
 return 0;
}
