#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std;
int main()
{
 
 setlocale(LC_ALL, "Turkish");
 
 struct otomobil
{
 string marka, model, yakit;
 int yil, km, fiyat;
};
 
 otomobil binek, suv, ticari;
 binek.marka = "BMW";
 binek.model = "M3";
 binek.yil = 2005;
 binek.km = 22564;
 binek.fiyat = 1000000; 
 binek.yakit = "LPG";
 
 suv.marka = "BMW";
 suv.model =  "X5";
 suv.yil = 2005;
 suv.km = 265000;
 suv.fiyat =336000;
 suv.yakit = "Dizel";
 
 ticari.marka = "BMC";
 ticari.model = "PRO";
 ticari.yil = 2008;
 ticari.km = 1044000;
 ticari.fiyat = 175000;
 ticari.yakit = "Dizel";
 
 cout << "Binegin markasi: " << binek.marka << endl;
 cout << "Binegin modeli: " << binek.model << endl;
 cout << "Binegin yili: " << binek.yil << endl;
 cout << "Binegin kilometresi: " << binek.km << endl;
 cout << "Binegin fiyati: " << binek.fiyat << endl;
 cout << "Binegin yakit turu: " << binek.yakit << endl;
 
 cout << "Suv'un markasi: " << suv.marka << endl;
 cout << "Suv'un modeli: " << suv.model << endl;
 cout << "Suv'un yili: " << suv.yil << endl;
 cout << "Suv'un kilometresi: " << suv.km << endl;
 cout << "Suv'un fiyati: " << suv.fiyat << endl;
 cout << "Suv'un yakit turu: " << suv.yakit << endl;
 
 cout << "Ticari'nin markasi: " << ticari.marka << endl;
 cout << "Ticari'nin modeli: " << ticari.model << endl;
 cout << "Ticari'nin yili: " << ticari.yil << endl;
 cout << "Ticari'nin kilometresi: " << ticari.km << endl;
 cout << "Ticari'nin fiyati: " << ticari.fiyat << endl;
 cout << "Ticari'nin yakit turu: " << ticari.yakit << endl;

system("pause");
return 0;
}
