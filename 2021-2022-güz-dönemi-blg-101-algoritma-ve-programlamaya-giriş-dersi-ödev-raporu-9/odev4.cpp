#include <iostream>
#include <locale.h>
#include <time.h>
#include <string.h>

using namespace std;

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

int main()
{
 string CUMLE , RAKAM;
 cout << "(SADECE INGILIZCE HARFLER KULLANARAK!!!)" << endl;
 cout << "Cumle giriniz :" << endl;
 getline(cin, CUMLE);
 RAKAM = CUMLE;
 
 rakamlarisil(CUMLE,RAKAM);
 
 cout << "Yeni cumle : " << CUMLE << endl;
 cout << "Cikarilan Rakamlar : " << RAKAM << endl;
 
system("pause");
return 0;
}
