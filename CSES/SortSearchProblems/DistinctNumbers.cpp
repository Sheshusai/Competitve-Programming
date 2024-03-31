#include <bits/stdc++.h>
using namespace std;


int main() {
  set<int> unique;
  int N;
  cin >> N;
  while(N--) {
    int x;
    cin >> x;
    unique.insert(x);
  }
  cout << unique.size() ;
  
  return 0;
}
