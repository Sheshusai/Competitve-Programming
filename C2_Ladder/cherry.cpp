#include <bits/stdc++.h>
using namespace std;

int main() {
	// given n numbers a1,a2,a3,...an
	// find maximum value of max(al,al+1,al+2,...ar)*min(al,al+1,...ar) over all pairs of (l,r)
	// 1 <= l < r <= n
	// t test cases t<=10000

  //#ifndef IN
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  //#endif
	
	int t;
	cin >> t;
	while(t--) {
		int n;
    cin >> n;
		long long arr[n];
		long long ans = 0;
		long long temp = 0;
		for(int i=0;i<n;i++) {
			cin >> arr[i];
      ans = max(ans,temp*arr[i]);
      temp = arr[i];
      
		}
    cout << ans << endl;
	}


	return 0;
}
