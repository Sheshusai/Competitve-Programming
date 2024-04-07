#include <bits/stdc++.h>
using namespace std;

long long divide(long long a,long long b) {
  return (a+b-1)/b;
}

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int T;
  cin >> T;
  while(T--) {
    long long x,y,k;
    cin >> x >> y >> k;
    long long a = k+k*y;
    long long ans = k+ divide(a-1,x-1);
    cout << ans << endl;

  }
  return 0;
}
