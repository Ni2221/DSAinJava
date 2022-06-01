#include"bits/stdc++.h"

using namespace std;

int main() {
  int no;
  cin >> no;

  vector<int>a(no);
  for (int i = 0 ; i < no; i++) {
    cin >> a[i];
  }
  set<int>s(a.begin() , a.end());
  for (int i = 1 ; i <= 100 ; i++) {
    if (s.count(i) == 0) {
      cout << i << endl;
    }
  }
  return 0;
}