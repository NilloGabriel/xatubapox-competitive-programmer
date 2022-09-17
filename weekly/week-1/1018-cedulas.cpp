#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, result;
  int notas[7] = {100, 50, 20, 10, 5, 2, 1};

  cin >> n;

  cout << n << endl;

  for (int i = 0; i < 7; i++) {
    result = n / notas[i];
    n = n % notas[i];

    cout << result << " nota(s) de R$ " << notas[i] << ",00" << endl;
  }
  
  return 0;
}