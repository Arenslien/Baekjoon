// Authored by : Arenslien
// BOJ : 24267번 - 알고리즘 수업 - 알고리즘 수행 시간 6

#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, cnt = 0;
  cin >> n;

  cout << 3*n*(n+1)/2 << '\n' << 3;

  return 0;
}

// n = 7
// i: 1 ~ 5(n-2) // 1부터 n-2까지의 cnt
// j: 2(i+1) ~ 6(n-1), 3~6, 4~6, 5~6, 6~6 // 5, 4, 3, 2, 1 --> 1부터 n-2까지의 cnt
// k: 3(j+1) ~ 7(n), 4~7, 5~7, 6~7, 7~7// 5, 4, 3, 2, 1
