#include <bits/stdc++.h>
using namespace std;


int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int T;
	cin >> T;
	while(T--) {
		int N, K;
		cin >> N >> K;
		int arr[N];
		for(auto &x:arr) cin >> x;
		int q[K];
		for(auto &x:q) cin >> x;
		long long preSum[N];
		preSum[0] = arr[0];
		for(int i=1;i<N;i++) preSum[i] = arr[i]+preSum[i-1];
		int preMax[N];
		preMax[0] = arr[0];
		for(int i=1;i<N;i++) preMax[i] = max(arr[i],preMax[i-1]);
		for(int i=0;i<K;i++) {
			int x = q[i];
			int ans = -1;
			int low = 0;
			int high = N-1;
			while(low<=high) {
				int mid = low+(high-low)/2;
				if(preMax[mid]<=x) {
					// if(preMax[mid]>ans)
					ans = mid;
					low = mid+1;
				}
				else high = mid-1;
			}
			if(ans==-1) cout << 0 << " ";
			else cout << preSum[ans] << " ";

		}
		cout << endl;
	}

	return 0;
}