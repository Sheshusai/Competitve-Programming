#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	int temp = 5;
	while(n>=temp) {
		ans += n/temp;
		temp *= 5;
	}
	cout << ans ;
	return 0;
}