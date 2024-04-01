#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;

struct kumas
{
string ipliktipi,dokumatipi,renk;
int dm2agirlik,miktar;
};

struct iskelet
{
string anamalzeme, birlestirme, tarz;
int boyut,miktar;
};

struct mobilya
{
kumas kaplama;
iskelet malzeme;
int fiyat,adet;
};




int main()
{
 int toplamfiyat = 0;
 mobilya urun;
 setlocale(LC_ALL, "Turkish");
 
 for(int i=0;i<10;i++)
 {
  cout << i+1 << ". mobilyanin kaplamasinin ipliktipini giriniz: " << endl;
  getline(cin, urun.kaplama.ipliktipi);
  cout << i+1 << ". mobilyanin kaplamasinin dokumatipini giriniz: " << endl;
  getline(cin, urun.kaplama.dokumatipi);
  cout << i+1 << ". mobilyanin kaplamasinin rengini giriniz: " << endl;
  getline(cin, urun.kaplama.renk);
  cout << i+1 << ". mobilyanin kaplamasinin dm2 agirligini giriniz: " << endl;
  cin >> urun.kaplama.dm2agirlik;
  cout << i+1 << ". mobilyanin kaplamasinin miktarini giriniz: " << endl;
  cin >> urun.kaplama.miktar;
  cin.ignore();
  
  cout << i+1 << ". mobilyanin malzemesinin turunu giriniz: " << endl;
  getline(cin, urun.malzeme.anamalzeme);
  cout << i+1 << ". mobilyanin malzemesinin birlestirme turunu giriniz: " << endl;
  getline(cin, urun.malzeme.birlestirme);
  cout << i+1 << ". mobilyanin malzemesinin tarzini giriniz: " << endl;
  getline(cin, urun.malzeme.tarz);
  cout << i+1 << ". mobilyanin malzemesinin boyutunu giriniz: " << endl;
  cin >> urun.malzeme.boyut;
  cout << i+1 << ". mobilyanin malzemesinin miktarini giriniz: " << endl;
  cin >> urun.malzeme.miktar;
  
  cout << i+1 << ". mobilyanin fiyatini giriniz: ";
  cin >> urun.fiyat;
  cin.ignore();
  cout << endl;
  toplamfiyat += urun.fiyat;
 } 
 cout << "toplam fiyat: " << toplamfiyat << endl;
 
 system("pause");
 return 0;
}
