#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int is_exist(const vector<int>& arr, int num, int start, int end) {
  if (start > end) return 0;
  // if (start == end && num != arr[mid]) return 0;
  
  int mid = (start+end) / 2;
  
  if (num == arr[mid]) return 1;
  else if (num < arr[mid]) return is_exist(arr, num, start, mid-1);
  else return is_exist(arr, num, mid+1, end);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  
  int N, M;
  cin >> N;
  
  vector<int> v;
  for (int i=0; i<N; i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(), v.end());

  cin >> M;
  while (M--) {
    int num;
    cin >> num;
    cout << is_exist(v, num, 0, v.size()) << '\n';
  }

  return 0;
}