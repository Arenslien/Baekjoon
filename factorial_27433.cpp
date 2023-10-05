#include <iostream> // c++ 표준 입출력 라이브러리

long long factorial(int n) { // 숫자가 급격하게 커지면 64bit 자료형 사용
  if (n < 2) return 1;

  return n * factorial(n-1);
}

int main() {
  int input;

  std::cin >> input; // C++에서는 scanf대신 cin사용

  std::cout << factorial(input); // C++에서는 printf대신 cout 사용

  return 0;
}