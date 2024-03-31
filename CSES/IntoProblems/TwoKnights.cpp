#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	for(long long i=1;i<=N;i++) {
		long long TotSqrs = i*i;
		long long ans = (TotSqrs*(TotSqrs-1))/2;
		ans = ans - 4*((i-2)*(i-1));
		cout << ans << endl;
		
	}
	return 0;
}