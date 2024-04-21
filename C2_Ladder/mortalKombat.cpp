#include <bits/stdc++.h>
using namespace std;

int fun(int arr[],int idx,int turn,vector<vector<int>> &dp,int &N) {
	if(idx==N) return 0;
	if(idx==N-1){
		if(!turn && arr[idx]==1) return 1;
		else return 0; 
	}
	if(dp[idx][turn]!=-1) return dp[idx][turn];
	if(turn){
		int l = fun(arr,idx+1,turn^1,dp,N);
		// cout << idx << "  " << turn << "  " << l << endl;
		int r = fun(arr,idx+2,turn^1,dp,N);
		dp[idx][turn] = min(l,r);
		// cout << idx << "  " << turn << "  " << r << endl;
	}
	else {
		int l = fun(arr,idx+1,turn^1,dp,N)+arr[idx];
		// cout << idx << "  " << turn << "  " << l << endl;
		int r = fun(arr,idx+2,turn^1,dp,N)+arr[idx+1]+arr[idx];
		// if(idx == 0 && turn == 0) cout << fun(arr,idx+2,turn^1,dp,N) << " " << (arr[idx+1]+arr[idx]) << endl;
		// cout << idx << "  " << turn << "  " << r << endl;
		dp[idx][turn] = min(l,r);
	}
	return dp[idx][turn];
}


int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >>  N;
		int arr[N];
		for(int i=0;i<N;i++) cin >> arr[i];
		vector<vector<int>> dp(N,vector<int>(2,-1));
		// fun(arr,0,0,dp, N);
		// for(int i=0;i<N;i++) {
		// 	cout << dp[i][0] << " " << dp[i][1] << endl;
		// }
		cout << fun(arr,0,0,dp,N) ;
		cout << endl;

	}
}