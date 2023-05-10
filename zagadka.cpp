#include <iostream>
using namespace std;

int main() 
{
  string z = "Ssuhjpkiuengtyrrdsenmtfrespevfdsertn";
  int p = 0;
  for (int n = 2; p < z.length(); n++)
  {
    cout << z[p];
    p += n;
  }
}