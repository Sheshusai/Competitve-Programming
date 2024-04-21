#include<bits/stdc++.h>
using namespace std;


int main() {
	// freopen("input.txt","r",stdin);
	// freopen("input.txt","w",stdout);
	
	// Two cats A and B 
	// n napping spots , change napping spot cyclically each hour
	// A -in order n, n-1, n-2, .. 1, n , n-1, n-2..
	// B -in order 1, 2, 3,...n-1,n,1,2,...
	// B is younger --> A takes the priority over spot
	// where cat b at hour K?
	// when they meet each other -> 
	
	// solution 
	// if n is even they always be on different parity spots
	// hence they never meet each other
	// else they meet each other at [n/2]th step so B make extra
	// step and they are neighbours moving in opposite direction
	// same as before as 1 and n neighbours and moving in opposite
	// direction. 
	// in case of even Bth position at kth hour is k--; (k%n)+1;
	// in case of odd  (k/(n/2)+k)%n + 1;
	
	int T;
	cin >> T;
	while(T--) {
		int n,k;
		cin >> n >> k;
		k--;
		int ans;
		if(n&1) {
			int p = (n)/2;
			p = k/p;
			ans = (k+p)%n+1;
		}
		else {
			ans = k%n+1;
		}
		cout << ans << endl;
	}
	return 0;
}