#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	long long n, m, a;
	cin >> n >> m >> a;
	long long ans = ((n/a)+(n%a != 0)) * (m/a+ (m%a != 0));
	cout << ans;
	return 0;
}