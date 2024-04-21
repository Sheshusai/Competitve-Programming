#include <bits/stdc++.h>
using namespace std;


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  int n , q , k;
  cin >> n >> q >> k;

  int arr[n+1];
  for(int i = 1; i <= n ; i++) cin >> arr[i];
  while(q--) {
    int l, r;
    cin >> l >> r;
    long long ans = (arr[l] - 1) + (k - arr[r]) + 2ll*((arr[r]-arr[l]+1)-(r-l+1)) ;
    cout << ans << endl;
  }


  return 0;
}



