
#include"bits/stdc++.h"

using namespace std;

int main() {
  string s = "worcestershire";
  map<char, int>m;
  int mx = 0;
  char ch;
  for (char c : s) {
    m[c]++;
    if (m[c] > mx) {
      ch = c;
      mx = m[c];
    }
  }

  cout << ch << endl;
}