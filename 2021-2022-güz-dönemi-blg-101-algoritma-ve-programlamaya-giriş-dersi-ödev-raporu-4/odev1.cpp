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

     cout<<"Yeni C�mle:"<<orgString<<endl;
  }
}
int main()
{
setlocale(LC_ALL, "Turkish");
  int f = 0;
  char t;

  cout << "0. Klavyeden girilen bir c�mlenin kelimelerinin ilk harfleri birle�tirerek k�saltma yapma" << endl;
  cout << "1. Klavyeden girilen bir c�mlenin k���k harflerini b�y�k harfe �evirme" << endl;
  cout << "2. Klavyeden girilen bir c�mle i�erisindeki rakamlar� bulan, rakamlar� c�mleden ��kararak ba�ka bir string olu�turma, c�mlenin rakams�z hali ve rakam stringini ekrana yazma" << endl;
  cout << "3. Klavyeden girilen bir c�mleyi tersten yeni bir c�mle olarak bir de�i�kene atayarak ekrana yazma" << endl;
  cout << "4. Bir string de�i�kende bulunan bir c�mle �zerinde, klavyeden girilen bir kelimeyi arayan, varsa de�i�tiren bul/de�i�tir yapma" << endl;
  cout << "5. Klavyeden girilen C�mlenin tamam�n� b�y�k harfe d�n��t�rme" << endl;
  cout << "6. Klavyeden girilen C�mlenin tamam�n� k���k harfe d�n��t�rme" << endl;
  cout << "7. Klavyeden girilen c�mledeki rakamlar�, rakamlar�n say�s�n� ekrana yazd�rma" << endl;
  cout << "8. Klavyeden girilen c�mledeki �nl� harflerin say�s�n� bulma ve ekrana yazd�rma" << endl;
  cout << "9. Klavyeden girilen c�mledeki kelime say�s�n� ekrana yazd�rma" << endl << endl;
  while(!((t == 'h') || (t == 'H')))
  {
  cout << "Kullanmak istedi�iz fonksiyonu se�iniz" << endl;
  f=getche();
  cout << endl;
  switch(f)
  {
  case '0':
  {
     char cum[100];
     printf("C�mle Giriniz: ");
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
     cout<<"C�mle Giriniz: ";
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

     cout << "C�mle Giriniz: " << endl;
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
     cout << "C�mlenin i�indeki numaralar \"" << myString << "\"" << endl;
     for (int i = 0 ; i < (int)numbers.size(); i++) {
     cout << "numaralar[" << i << "] = " << numbers[i] << endl;
                                                    }
  break;
  }  
  case '3':
  {
     cout<<"C�mle Giriniz: ";
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
     cout << "\nC�mle giriniz(max 3 kelime)\n" ;
     cin.getline(string , 80);
     cout <<"\nDe�i�tirece�iniz harf grubunu giriniz\n";
     cin.getline(found , 80);
     cout <<"\n�ununla de�i�tir \n"      ;
     cin.getline(replace , 80);

     strreplace(string, found, replace);

  break;
  }  
  case '5':
  {
     cout<<"C�mle Giriniz: ";
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
     cout<<"C�mle Giriniz: ";
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
     cout<<"C�mle Giriniz: ";
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
     cout<<"C�mle Giriniz: ";
     gets(line);
     for(int i=0;line[i]!='\0';++i)
    {
      if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u' || line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U')
      ++v;
    }
     cout << "�nl� harfler: "<< v;
  }  
  break;
  case '9':
  {
     char cumle[100];
 
     cout << "C�mle Giriniz: ";
     cin.getline(cumle,100);
 
     int w = 0;
 
     for(int i = 0; cumle[i] != '\0'; i++)
	{
     if (cumle[i] == ' ')
		{
		 w++;
		}
	}
 
     cout << "Kelime say�s� = " << w+1 << endl;
  break;
  }  
  default:
     cout << "Hatal� giri� yapt�n�z." << endl;   
  break;
  } 
     cout << endl << "Tekrar se�mek ister misiniz e/h E/H?" << endl;
     t = getche();
     cout << endl;
  }  
  
system("pause");
return 0;
}
