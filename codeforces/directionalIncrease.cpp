#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

  int T;
  cin >> T;
  while(T--) {
    int n;
    cin >> n;
    long long ans = 0;
    bool flag = true;
    for(int i=0;i<n;i++) {
      int x;
      cin >> x;
      ans += x;
      if(ans <0) {
        flag = false;
      }
      if(ans == 0) {
        while(++i<n) {
          int t;
          cin >> t;
          if(t!=0) flag = false;
        }
      }
    }
    if(ans == 0 && flag) cout << "Yes\n";
    else cout << "No\n";
  }
	
	return 0;
}
