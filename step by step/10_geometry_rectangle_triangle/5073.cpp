// Authored by : Arenslien
// BOJ : 10101번 - 삼각형 외우기

#include <iostream>
#include <string>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s;
  while (true) {
      int a1, a2, a3;
      cin >> a1 >> a2 >> a3;

      if (a1 + a2 + a3 == 0) 
        break;
      else if (a1 == a2 && a2 == a3)
        cout << "Equilateral";
      else if (a1 == a2 || a2 == a3 || a3 == a1)
        cout << "Isosceles";
      else
        cout << "Scalene";
  }

  return 0;
}
