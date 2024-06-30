#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++) {
		int x;
		cin >> x;
		mp[x] = i;
	}
	long long ans=0;
	for(int i=1;i<n;i++) {
		ans += abs(mp[i]-mp[i+1]);
	}
	cout << ans;
	return 0;
}