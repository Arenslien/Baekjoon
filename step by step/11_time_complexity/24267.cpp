// Authored by : Arenslien
// BOJ : 24267번 - 알고리즘 수업 - 알고리즘 수행 시간 6

#include <iostream>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  long long n, cnt = 0;
  cin >> n;

  for (long long i = 1; i <= n - 2; i++)
  {
    cnt += i * (i + 1) / 2;
  }
  cout << cnt << '\n' << 3;

  return 0;
}