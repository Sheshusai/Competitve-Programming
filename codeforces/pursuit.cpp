#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int A[n];
		int B[n];
		for(int i=0;i<n;i++) cin >> A[i];
		for(int i=0;i<n;i++) cin >> B[i];
		int PA[n+1];
		int PB[n+1];
		PA[0] = 0;
		PB[0] = 0;
		sort(A,A+n,greater<int>());
		sort(B,B+n,greater<int>());
		for(int i=1;i<=n;i++) {
			PA[i] = A[i-1]+PA[i-1];
			PB[i] = B[i-1]+PB[i-1];
		}
		int ans = -1;
		int l=0;
		int h=n;
		while(l<=h) {
			int k = l+(h-l)/2;
			int t = k+n;
			t = t-t/4;
			long long s1=0;
			long long s2=0;
			if(t>=k) {
				s1 += (PA[t-k]+k*100);
				if(t>=n)
				s2 += (PB[n]);
				else s2+= PB[t];
			}
			else{
				s1 += t*100;
				if(t>=n)
				s2 += (PB[n]);
				else s2+= PB[t];
			}
			if(s1>=s2) {
				ans = k;
				h = k-1;
			}
			else{
				l= k+1;
			}
			
		}
		cout << ans << endl;
	}
	return 0;
}