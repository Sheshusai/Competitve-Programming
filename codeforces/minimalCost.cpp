#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n,v,u;
		cin >> n >> u >> v;
		int arr[n];
		for(int i=0;i<n;i++) cin >> arr[i];
		int ans = INT_MAX;
		for(int i=1;i<n;i++) {
			if((arr[i]-arr[i-1])==0) ans = min(ans,v+min(v,u));
			if(abs(arr[i]-arr[i-1])>=2) ans = 0;
			if(abs(arr[i]-arr[i-1])==1) ans = min(ans,min(u,v));
		}
		cout << ans << endl;
		
	}
	return 0;
}