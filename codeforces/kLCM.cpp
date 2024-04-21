#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n,k;
		cin >> n >> k;
		if(n&1) {
			cout << n/2 << " " << n/2  << " " << 1 << endl;
		}
		else {
			if(n%4==0)
			cout << n/2 << " " << n/4 << " " << n/4 << endl;
			else
				cout << 2 << " " << (n-2)/2 << " " << (n-2)/2 << endl;
		}
	}
	
	return 0;
}