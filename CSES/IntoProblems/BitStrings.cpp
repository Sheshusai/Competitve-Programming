#include <bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int binExp(int n,int p) {
	if(p==0) return 1;
	int half = binExp(n,p/2);
	int full = (half*half)%mod;
	if(p&1) return (full*n)%mod;
	return full;
}

int alter(int n,int p) {
	long long t = n;
	int ans = 1;
	while(p) {
		if(p&1) ans = (ans*t)%mod;
		t = (t*t)%mod;
		p = p>>1;
	}
	return (ans+mod)%mod;
}
int main() {
	int n;
	cin >> n;
	cout << alter(2,n);
	return 0;
}
