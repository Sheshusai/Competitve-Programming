#include<bits/stdc++.h>
using namespace std;

void rec(int low, int high, vector<int> &permutation,vector<int> &ans,int depth){
	if(low>high) return;
	int m = low;
	for(int i=low;i<=high;i++) {
		if(permutation[i]>permutation[m]) m = i;
	}
	ans[permutation[m]] = depth;
	rec(low,m-1,permutation,ans,depth+1);
	rec(m+1,high,permutation,ans,depth+1);
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	// divide and conquer
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		vector<int> permutation(N);
		vector<int> ans(N+1,0);
		for(int i = 0; i < N; i++) {
			cin >> permutation[i];
		}
		rec(0,N-1,permutation,ans,0);
		for(int i=0;i<N;i++) {
			 cout << ans[permutation[i]] << " ";
		}
		cout << endl;
	}
	return 0;
}