#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n , m , k;
		cin >> n >> m >> k;
		int t = n/m;
		t = t*(m-1);
		if(n%m) t += (n%m)-1;
		if(k>=t) cout << "NO\n";
		else cout << "YES\n";
		
	}
	return 0;
}