#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	long long n,s;
	cin >> n >> s;
	long long arr[n];
	long long mini = LLONG_MAX;
	for(int i=0;i<n;i++) {
		cin >> arr[i];
		mini = min(mini,arr[i]);
	}
	for(int i=0;i<n;i++) {
		if(arr[i]>mini && s>0) s-= (arr[i]-mini);
	}
	if(s<0) s = 0;
	long long q = s/n;
	long long r = s%n;
	if(s > mini*n) cout << -1 ;
	else {
		long long ans = mini-q;
		if(r) ans--;
		cout << ans;
	}
	
	return 0;
}