#include <bits/stdc++.h>
using namespace std;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    // aj-ai = j-i;
    map<int,int> mp;
    long long ans = 0;
    for(int i=0;i<N;i++) {
      int x;
      cin >> x;
      ans += mp[x-i];
      mp[x-i]++;
    }
    cout << ans << endl;
  }
  return 0;
}
