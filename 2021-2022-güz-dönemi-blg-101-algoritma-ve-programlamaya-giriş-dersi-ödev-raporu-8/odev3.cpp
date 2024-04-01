#include <iostream>
#include <string.h>
#include <time.h>

using namespace std;

int main()
{
    
int A[4,4],B[4,4],sayac=0;

srand(time(NULL));

for(int i=0;i<4;i++)
{
 for(int k=0;k<4;k++)
 {
  A[i,k] = rand()%2;
  B[i,k] = rand()%2;
  
  if(A[i,k] == B[i,k])
  sayac +=1;
 }  
}

cout << "ayni degerde olan ayni indisli eleman sayisi : " << sayac << endl;

system("pause");
return 0;
}
