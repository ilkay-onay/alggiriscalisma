#include <iostream>
#include <locale.h>
#include <time.h>
#include <conio.h>
#include <string.h>

using namespace std;

void sayiuret(int a[50], int b, int c)
{
 srand(time(NULL));
 for(int i=0;i<50;i++)
 {
 if(b>c)
 a[i] = c + rand()%(b-c);
 else
 a[i] = b + rand()%(c-b);
 } 
}  

float artort(int a[10])
{
int toplam=0;
float ortalama;
for(int i=0;i<10;i++)
toplam += a[i];
ortalama = toplam / 10;
return ortalama;
}
void minmaks(int a[10], int& b, int& c) 
{
int temp;
	for(int i=0; i<10; i++)
    {
		for(int j=0; j<9; j++)
        {
			if(a[j] < a[j+1])
            {
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
    }
    b = a[0];
    c = a[9]; 
}

void citftler(int a[10])
{
for(int i=0; i<10; i++)
{
    if(a[i]%2 == 1)
    a[i] = 0;
}
}
void tekler(int a[10])
{
    for(int i=0; i<10; i++)
{
    if(a[i]%2 == 0)
    a[i] = 0;
}
}

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


void rakamlarisil(string& cumle, string& rakam)
{

int a = cumle.find_first_of("0123456789");
 while(a < cumle.size())
  {  
  cumle.replace(a, 1, "");
  a = cumle.find_first_of("0123456789");
  }
  
int b = cumle.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWYZabcdefghijklmnopqrstuvwxyz!,.:?+-*/();%'");
 while(b < cumle.size())  
 {
  rakam.replace(b, 1 , "");
  b = rakam.find_first_of("ABCDEFGHIJKLMNOPQRSTUVWYZabcdefghijklmnopqrstuvwxyz!,.:?+-*/();%'");      
 } 
}

void terstenyaz(string& cumle)
{
 string tersten(cumle.rbegin(), cumle.rend());
 cumle = tersten;
}

unsigned long basamakyazdir(int A)
{
 if(A>0)
 {
 cout << A%10 << endl;
 return basamakyazdir(A/10);
 } 
 else
 return 0;
}


unsigned long basamaktopla(int A)
{
 if (A == 0)
    return 0;
    return (A%10 + basamaktopla(A/10));
}
 
 
 unsigned long ebob(int x,int y)
{
if(x==0)  
return y;
 
return ebob( y%x, x ); 
}


unsigned long ekok(int x,int y)
{
 static int multiple = 0;
 multiple += y;
 
 if((multiple % x == 0) && (multiple % y == 0))
 {
  return multiple;
 }
 else
 {
  return ekok(x, y);
 }
}

