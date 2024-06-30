#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	double n, R, r;
	cin >> n >> R >> r;
	double epsilon = 0.0000001;
	if(r>R) {
		cout << "NO";
		return 0;
	}
	if(n==1) {
		if(r<=R) cout << "YES";
		else cout << "NO";
		return 0;
	}
	
	double temp = r/sin(3.14159265359/n) + r;
	if(temp <= R+epsilon) cout << "YES";
	else cout << "NO";
	return 0;
}