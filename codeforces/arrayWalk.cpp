#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

  int T;
  cin >> T;
  while(T--) {
    int n,k,z;
    cin >> n >> k >> z;
    int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    long long ans =0;
    long long m = 0;
    int mi = -1;

    for(int i = 0; i < k ; i++) {
      if(m < (a[i] + a[i+1])) {
        m = a[i] + a[i+1];
        mi = i+1;
      }
    }

    for(int i=0;i<=mi;i++) {
      ans += a[i];
    }
    int t = k-mi;
    int p = min(t,z);

    ans += (p)*m;
    if(t>z) {
      int dif = t-z;
      for(int i=mi+1;i<=mi+dif;i++) {
        ans += a[i];
      }
    }
    cout << ans << endl;


  }
	
	return 0;
}
