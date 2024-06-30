#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int q;
	cin >> q;
	while(q--) {
		long long n,m;
		cin >> n >> m;
		long long cycleSum = 0;
		for(int i=0;i<9;i++) {
			cycleSum += (m*(i+1))%10;
		}
		long long k = n/m;
		long long ans = (k/10)*cycleSum;
		for(int i=0;i<k%10;i++) ans += (m*(i+1))%10;
		cout << ans << endl;
	}
	return 0;
}