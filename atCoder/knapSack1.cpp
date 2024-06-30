#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	
	int N,W;
	cin >> N >> W;
	vector<vector<int>> vec;
	for(int i=0;i<N;i++) {
		int w,v;
		cin >> w >> v;
		vec.push_back({w,v});
	}
	vector<vector<long long>> dp(N,vector<long long>(W+1,0));
	for(int i=0;i<=W;i++) {
		if(vec[0][0]<=i) dp[0][i] = vec[0][1];
		// cout << dp[0][i] << " ";
	}
	// cout << endl << endl;
	for(int i=1;i<N;i++) {
		for(int j=1;j<=W;j++) {
			long long wt = vec[i][0];
			long long notTake = dp[i-1][j];
			long long Take = 0;
			if(vec[i][0]<=j) Take = vec[i][1]+dp[i-1][j-vec[i][0]];
			dp[i][j] = max(Take,notTake);
			
		}
	}
	// cout << endl;
	// for(int i=0;i<N;i++) {
		// for(int j=0;j<=W;j++) cout << dp[i][j] << " ";
		// cout << endl;
	// }
	cout << dp[N-1][W];
	
	
	return 0;
}