#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void matrisegir(int a[3][3])
{
for(int j=0;j<3;j++)
 {
 for(int k=0;k<3;k++)
  {
   cout << "(" << j+1 << "," << k+1 << ") matrisini giriniz:" << endl;
   cin >> a[j][k];  
  }     
 }      
}

void matristopla(int a[3][3], int b[3][3] , int c[3][3]) 
{
for(int j=0;j<3;j++)
 {
 for(int k=0;k<3;k++)
  {
c[j][k] =  a[j][k] + b[j][k];
  }     
 }
}

int main()
{
int A[3][3], B[3][3], C[3][3];

matrisegir(A);
matrisegir(B);

matristopla(A,B,C);


for(int j=0;j<3;j++)
 {
 for(int k=0;k<3;k++)
  {
cout << "C(" << j+1 << "," << k+1 << ") matrisi:" << C[j][k] << endl;
  }    
 }

setlocale(LC_ALL, "Turkish");
system("pause");
return 0;
}        
              
                        
