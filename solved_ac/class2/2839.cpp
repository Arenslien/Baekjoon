#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, max = 0;
  cin >> N; 

  if (N%5 == 0) max = N/5;
  else if (N%3 == 0) max = N/3;
  else {
    for (int i=(N/5); i>=0; i--) {
      if ((N-i*5)%3 == 0) {
        if (i + (N-i*5)/3 < max) max = i + (N-i*5)/3;
      }
    }
  }

  cout << max;

  return 0;
}

// 5x + 3y = N

// y = 0
// x = 0
// 18 = 15 + 3 3 1
// 18 = 10 + 8 2 2
// 18 = 5 + 13 1

// 19 = 15 + 4
// 19 = 10 + 9