#include <iostream>
#include <fstream>
using namespace std;

ifstream tekst1("Tekst1.txt");
ifstream tekst2("Tekst2.txt");
ofstream tekst3("suma.txt");

int main() 
{
  string a;
  while(tekst1.good())
  {
    getline(tekst1, a);
    tekst3 << a << endl;
  }
  tekst1.close();
  while(tekst2.good())
  {
    getline(tekst2, a);
    tekst3 << a << endl;
  }
  tekst2.close();
}