#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
 setlocale(LC_ALL, "Turkish");
 
 float td, ty, tn, fd, fy, fn, md, my, mn, tp, fp, mp, p, n;
 
  cout << "Turkce dogru sayisini girin\n";
  cin >> td;
  cout << "Turkce yanlis sayisini girin\n";
  cin >> ty;
  cout << "Fen dogru sayisini girin\n";
  cin >> fd;
  cout << "Fen yanlis sayisini girin\n";
  cin >> fy;
  cout << "Matematik dogru sayisini girin\n";
  cin >> md;
  cout << "Matematik yanlis sayisini girin\n";
  cin >> my;
  
  tn = td - (ty/4);
  fn = fd - (fy/4);
  mn = md - (my/4);
  
  tp = tn*2;
  fp = fn*4;
  mp = mn*5;
  
  n = tn + fn + mn;
  p = tp + fp + mp;
  
  cout << "Turkce net: " << tn << endl;
  cout << "Turkce puan: " << tp << endl;
  cout << "Fen net: " << fn << endl;
  cout << "Fen puan: " << fp << endl;
  cout << "Matematik net: " << mn << endl;
  cout << "Matematik puan: " << mp << endl;
  cout << "Toplam Net: " << n << endl;
  cout << "Toplam Puan: " << p << endl;
 
     
 system("pause");
 
 return 0;
}
  
