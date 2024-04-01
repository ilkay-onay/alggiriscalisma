#include<iostream>
#include <vector>
#include <locale.h>
#include<string>
#include<conio.h>
#include <cctype>

using namespace std;
void strreplace(string orgString, const string search, const string replace )
{
     for( size_t pos = 0; ; pos += replace.length() )
  {
      pos = orgString.find( search, pos );
      if( pos == string::npos )
      break;
      orgString.erase( pos, search.length() );
      orgString.insert( pos, replace);

     cout<<"Yeni Cümle:"<<orgString<<endl;
  }
}
int main()
{
setlocale(LC_ALL, "Turkish");
  int f = 0;
  char t;

  cout << "0. Klavyeden girilen bir cümlenin kelimelerinin ilk harfleri birleþtirerek kýsaltma yapma" << endl;
  cout << "1. Klavyeden girilen bir cümlenin küçük harflerini büyük harfe çevirme" << endl;
  cout << "2. Klavyeden girilen bir cümle içerisindeki rakamlarý bulan, rakamlarý cümleden çýkararak baþka bir string oluþturma, cümlenin rakamsýz hali ve rakam stringini ekrana yazma" << endl;
  cout << "3. Klavyeden girilen bir cümleyi tersten yeni bir cümle olarak bir deðiþkene atayarak ekrana yazma" << endl;
  cout << "4. Bir string deðiþkende bulunan bir cümle üzerinde, klavyeden girilen bir kelimeyi arayan, varsa deðiþtiren bul/deðiþtir yapma" << endl;
  cout << "5. Klavyeden girilen Cümlenin tamamýný büyük harfe dönüþtürme" << endl;
  cout << "6. Klavyeden girilen Cümlenin tamamýný küçük harfe dönüþtürme" << endl;
  cout << "7. Klavyeden girilen cümledeki rakamlarý, rakamlarýn sayýsýný ekrana yazdýrma" << endl;
  cout << "8. Klavyeden girilen cümledeki ünlü harflerin sayýsýný bulma ve ekrana yazdýrma" << endl;
  cout << "9. Klavyeden girilen cümledeki kelime sayýsýný ekrana yazdýrma" << endl << endl;
  while(!((t == 'h') || (t == 'H')))
  {
  cout << "Kullanmak istediðiz fonksiyonu seçiniz" << endl;
  f=getche();
  cout << endl;
  switch(f)
  {
  case '0':
  {
     char cum[100];
     printf("Cümle Giriniz: ");
     gets(cum);

     for(int i=0; i<strlen(cum);i++)
    {
      if(i==0)
       printf("%c",cum[0]);
      if(cum[i]==' ')
       printf("%c",cum[i+1]);
    }

     printf("\n");
  break;
  }  
  case '1':
  {
     cout<<"Cümle Giriniz: ";
     int i;
     string str;
     getline(cin,str); 
     for (size_t i = 0; i < str.length(); ++i) 
     { 
      str[i]=toupper(str[i]); 
     } 
      cout<<str; 
  break;
  } 
  case '2':
  {
     string myString;
     vector<int> numbers;
     int num = 0;

     cout << "Cümle Giriniz: " << endl;
     getline(cin, myString);

     for (int i = 0; i < (int)myString.length(); i++) 
     {
      if (isdigit(myString[i])) 
       {
		    num = (num * 10) + (myString[i] - '0');
       }
      else {
      if (num > 0) {
       numbers.push_back(num);
       num = 0;
                   }
		   }
	 }
     if (num > 0) 
      {
       numbers.push_back(num);
      }
     cout << "Cümlenin içindeki numaralar \"" << myString << "\"" << endl;
     for (int i = 0 ; i < (int)numbers.size(); i++) {
     cout << "numaralar[" << i << "] = " << numbers[i] << endl;
                                                    }
  break;
  }  
  case '3':
  {
     cout<<"Cümle Giriniz: ";
     string cumle;
     getline(cin,cumle);
     int len = cumle.length();
     int n=len-1;
     for(int i=0;i<(len/2);i++){
     swap(cumle[i],cumle[n]);
     n = n-1;

  }
     cout<<cumle<<endl;
  break;
  }  
  case '4':
  {
     char string[80], replace[80], found[80], str1[80], str2[80], str3[80] ;
     cout << "\nCümle giriniz(max 3 kelime)\n" ;
     cin.getline(string , 80);
     cout <<"\nDeðiþtireceðiniz harf grubunu giriniz\n";
     cin.getline(found , 80);
     cout <<"\nÞununla deðiþtir \n"      ;
     cin.getline(replace , 80);

     strreplace(string, found, replace);

  break;
  }  
  case '5':
  {
     cout<<"Cümle Giriniz: ";
     int i;
     string str;
     getline(cin,str); 
     for (size_t i = 0; i < str.length(); ++i) 
      { 
       str[i]=toupper(str[i]); 
      } 
     cout<<str; 
  break;
  }  
  case '6':
  {
     cout<<"Cümle Giriniz: ";
     int i;
     string str;
     getline(cin,str); 
     for (size_t i = 0; i < str.length(); ++i) 
      { 
       str[i]=tolower(str[i]); 
      } 
     cout<<str; 
  break;
  }  
  case '7':
  { 
     char line[150];
     int d=0;
     cout<<"Cümle Giriniz: ";
     gets(line);
     for(int i=0;line[i]!='\0';++i)
    {
      if(line[i]>='0'&& line[i]<='9')
            ++d;
    }
     cout << "\nRakam: "<< d;
  break;
  }  
  case '8':
    {
     int v = 0;
     char line[150];
     cout<<"Cümle Giriniz: ";
     gets(line);
     for(int i=0;line[i]!='\0';++i)
    {
      if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
      ++v;
    }
     cout << "Ünlü harfler: "<< v;
  }  
  break;
  case '9':
  {
     char cumle[100];
 
     cout << "Cümle Giriniz: ";
     cin.getline(cumle,100);
 
     int w = 0;
 
     for(int i = 0; cumle[i] != '\0'; i++)
	{
     if (cumle[i] == ' ')
		{
		 w++;
		}
	}
 
     cout << "Kelime sayýsý = " << w+1 << endl;
  break;
  }  
  default:
     cout << "Hatalý giriþ yaptýnýz." << endl;   
  break;
  } 
     cout << endl << "Tekrar seçmek ister misiniz e/h E/H?" << endl;
     t = getche();
     cout << endl;
  }  
  
system("pause");
return 0;
}
