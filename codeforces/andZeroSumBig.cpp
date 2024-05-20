#include<bits/stdc++.h>
using namespace std;

int binExp(int n, int k, int &mod) {
	// if(k==0) return 1;
	// int half = binExp(n,k/2,mod);
	// int full = (half*1ll*half)%mod;
	// if(k&1) full = (full*1ll*n)%mod;
	// return full;
	int ans = 1;
	while(k) {
		if(k&1) ans = (ans*1ll*n)%mod;
		n = (int)((n*1ll*n)%mod);
		k = k>>1;
	}
	return (ans+mod)%mod;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n,k;
		cin >> n >> k;
		int mod = (int)1e9+7;

		cout << binExp(n,k,mod) << endl;
	}
	return 0;
}
