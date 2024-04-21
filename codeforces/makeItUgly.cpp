#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int arr[N];
		for(int i=0;i<N;i++) cin >> arr[i];
		int first = arr[0];
		
		int ans = INT_MAX;
		int j= -1;
		for(int i=1;i<N;i++) {
			if(arr[i]!=first) {
				ans = min(ans,i-j-1);
				j= i;
			}
		}
		if(j!=-1)
		ans = min(ans,N-j-1);
		if(ans!=INT_MAX) cout << ans << endl;
		else cout << -1 << endl;
	}
	return 0;
}