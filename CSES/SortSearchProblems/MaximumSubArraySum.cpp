#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  long long sum = 0;
  
  for(int i=0;i<n;i++) {
    long long x;
    cin >> x;
    sum = max(x,sum+x);
    if(i==0) ans = sum;
    else
    ans = max(ans,sum);
  }
  
  cout << ans << endl;
  
  return 0;
}
