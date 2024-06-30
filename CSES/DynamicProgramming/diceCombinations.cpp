#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	int dp[n+1] = {0};
	dp[0] = 1;
	int mod = 1e9+7;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=6;j++) {
			if((i-j)>=0) dp[i] = (dp[i]+dp[i-j])%mod;
			else break;
		}
	}
	cout << dp[n];
	return 0;
}