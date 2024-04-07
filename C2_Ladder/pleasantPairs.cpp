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
    int arr[N];
    map<int,int> mp;
    for(int i=0;i<N;i++) {
      cin >> arr[i];
      mp[arr[i]] = i+1;
    }
    long long ans = 0;

    for(int i=3;i<2*N;i++) {
      for(int j=1;j*j<=i;j++) {
        if((i%j)!=0) continue;
        int p = i/j;
        if(j<p && mp[j]&&mp[p]&&(mp[j]+mp[p]==i)) ans++;
      }
    }
    
    cout << ans << endl;   
  }

  return 0;
}
