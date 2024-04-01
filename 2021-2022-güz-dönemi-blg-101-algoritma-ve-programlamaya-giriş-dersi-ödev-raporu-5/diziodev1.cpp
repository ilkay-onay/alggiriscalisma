#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
int A[3,3];
int B[3,3];
int C[3,3];
int D[3,3];
int F=0;
int j=0;
int k=0;

for(j=0; j<3; j++)
{
 for(k=0; k<3; k++)
 {
  cout << "A[" << j+1 << "," << k+1 << "] matrisini giriniz:";
  cin >> A[j,k];
  cout << endl;
  cout << "B[" << j+1 << "," << k+1 << "] matrisini giriniz:";
  cin >> B[j,k];
  cout << endl;
  C[j,k] = A[j,k] + B[j,k];
  cout << "A[" << j+1 << "," << k+1 << "] ve B[" << j+1 << "," << k+1 << "] matrisinin toplami: C[" << j+1 << "," << k+1 << "] = " << C[j,k] << endl;
 }    
}
 
D[0,0] = A[0,0] * B[0,0] + A[0,1] * B[1,0] + A[0,2] * B[2,0];
D[0,1] = A[0,0] * B[0,1] + A[0,1] * B[1,1] + A[0,2] * B[2,1];
D[0,2] = A[0,0] * B[0,2] + A[0,1] * B[1,2] + A[0,2] * B[2,2];
D[1,0] = A[1,0] * B[0,0] + A[1,1] * B[1,0] + A[1,2] * B[2,0];
D[1,1] = A[1,0] * B[0,1] + A[1,1] * B[1,1] + A[1,2] * B[2,1];
D[1,2] = A[1,0] * B[0,2] + A[1,1] * B[1,2] + A[1,2] * B[2,2];
D[2,0] = A[2,0] * B[0,0] + A[2,1] * B[1,0] + A[2,2] * B[2,0];
D[2,1] = A[2,0] * B[0,1] + A[2,1] * B[1,1] + A[2,2] * B[2,1];
D[2,2] = A[2,0] * B[0,2] + A[2,1] * B[1,2] + A[2,2] * B[2,2];

F = A[0,0] * A[1,1] * A[2,2] + A[0,1] * A[1,2] * A[2,0] + A[0,3] * A[1,0] * A[2,1] -(A[2,0] * A[1,1] * A[0,2] + A[2,1] * A[1,2] * A[0,0] + A[2,2] * A[1,0] * A[0,1]);

j=0;
k=0;
for(j=0;j<3;j++)
 for(k=0;k<3;k++)
   cout << "A[" << j+1 << "," << k+1 << "] ve B[" << j+1 << "," << k+1 << "] matrisinin carpimi: C[" << j+1 << "," << k+1 << "] = " << D[j,k] << endl;
   
cout << "A'nin determinanti: " << F << endl;

system("pause");
return 0;
}
