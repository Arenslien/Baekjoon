// 10804: 카드 역배치

#include <iostream>

int main() {
  int cards[20];

  for (int i=0; i<20; i++) cards[i] = i+1;

  for (int i=0; i<10; i++) {
    int a, b;
    std::cin >> a >> b;

    for (int j=0; j<(b-a)/2+1; j++) {
      int temp = cards[a+j-1];
      cards[a+j-1] = cards[b-j-1];
      cards[b-j-1] = temp;

      // 5 10(5): 5(a) 6(a+1) 7(a+2) 8(b-2) 9(b-1) 10(b)
      // 6 10(4): 6(a) 7(a+1) 8(a+2, b-2) 9(b-1) 10(b)
    }
  }

  for (int i=0; i<20; i++) std::cout << cards[i] << ' ';

  return 0;
}