// Authored by : Arenslien
// BOJ : 23971번 - ZOAC 4

#include <iostream>
#include <string>

using namespace std;

bool is_prime(int x) {
  if (x == 1) return true;

  for (int i=2; i*i<=x; i++) {
    if (x%i == 0) return false;
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int sum = 0;
  string word;

  cin >> word;

  for (char c : word) {
    if ('A' <= c && c <= 'Z') sum += (c - 'A') + 27;
    else sum += (c - 'a') + 1;
  }

  if (is_prime(sum)) cout << "It is a prime word.";
  else cout << "It is not a prime word.";

  return 0;
}