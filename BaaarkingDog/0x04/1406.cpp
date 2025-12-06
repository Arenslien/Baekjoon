#include <iostream>
#include <string>
#include <list>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  list<char> editor;
  string s;
  int M, cursor;
  cin >> s >> M;
  cursor = s.size();
  
  for (char c : s) editor.push_back(c);

  while (M--) {
    char cmd, tmp;
    cin >> cmd;
    if (cmd == 'P') {
      cin >> tmp;
      editor.push_back(tmp);
      cursor++;
    }
    else if (cmd == 'L' && cursor > 0) cursor--;
    // else if (cmd == 'D' && cursor < ) cursor++;
    else
  }

  return 0;
}