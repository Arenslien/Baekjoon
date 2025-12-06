#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> L = {1, 2};
  list<int>::iterator iter = L.begin();
  
  L.push_front(10);

  cout << *iter << '\n';

  L.push_back(5);
  L.insert(iter, 6);
  iter++;
  iter = L.erase(iter);

  cout << *iter << '\n';

  for (auto i : L) cout << i << ' ';

  cout << '\n';

  for (list<int>::iterator it = L.begin(); it != L.end(); it++) cout << *it << ' ';

  return 0;
}