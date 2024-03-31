#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int a,b;
		cin >> a >> b;
		int sum = a+b;
		int m = min(a,b);
		if(sum%3!=0 || m<sum/3) {
			cout << "NO\n";
			continue;
		}
		cout << "YES\n";
	}
	return 0;
}