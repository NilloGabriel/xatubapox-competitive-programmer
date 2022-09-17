#include <bits/stdc++.h>

using namespace std;

int main() {
  float intervalo;

  cin >> intervalo;

  if (intervalo >= 0 && intervalo <= 25)
    cout << "Intervalo [0,25]" << endl;
  else if (intervalo > 25 && intervalo <= 50)
    cout << "Intervalo (25,50]" << endl;
  else if (intervalo > 50 && intervalo <= 75)
    cout << "Intervalo (50,75]" << endl;
  else if (intervalo > 75 && intervalo <= 100)
    cout << "Intervalo (75,100]" << endl;
  else 
    cout << "Fora de intervalo" << endl;

  return 0;
}