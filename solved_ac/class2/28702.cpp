#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int current = 0;

  for (int i=0; i<3; i++) {
    string num;
    cin >> num;

    if (num != "Fizz" || num != "Buzz" || num != "FizzBuzz") current = stoi(num);
    current++;
  }

  if (current%3 == 0 && current%5 == 0) cout << "FizzBuzz";
  else if (current%3 == 0) cout << "Fizz";
  else if (current%5 == 0) cout << "Buzz";
  else current;

  return 0;
}
