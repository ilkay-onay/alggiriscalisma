#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
setlocale(LC_ALL, "Turkish");
int ciro[31];
int temp = 0;
int yil[31];
srand(time(NULL));

for(int i=0;i<31;i++)
yil[i] = 1990;

for(int i=1;i<31;i++)
yil[i] = yil[i-1] + 1;

for(int i=0;i<31;i++)
{
 ciro[i] = 100 + rand()%5000;
} 
 
	for(int i=0; i<31; i++){
		for(int j=0; j<31; j++){
			if(ciro[i] < ciro[j]){
				temp = ciro[i];
				ciro[i] = ciro[j];
				ciro[j] = temp;
				
				temp = yil[i];
				yil[i] = yil[j];
				yil[j] = temp;
			}
		}
	}
	for(int i=0; i<31; i++){
		cout << yil[i] << " yilinda ciro miktari : " << ciro[i] << endl;
	}
 
system("pause");
return 0;
}
