// 10818: 최소, 최대
#include <iostream>

int main() {
  int N, max = -1000000, min = 1000000;

  for (int i=0; i<N; i++) {
    int num;
    std::cin >> num;

    if (num > max) max = num;
    if (num < min) min = num;
  }

  std::cout << min + " " + min;

  return 0;
}