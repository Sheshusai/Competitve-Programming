#include <bits/stdc++.h>
using namespace std;



int main() {
  int n,x;
  cin >> n >> x;
  map<int,int> mp;

  for(int i=1;i<=n;i++) {
    int t;
    cin >> t;
    if(mp[x-t]) {
      cout << mp[x-t] << " " << i;
      return 0;
    }
    mp[t] = i;
  }
  cout << "IMPOSSIBLE" ;
  return 0;
}
