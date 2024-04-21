#include <bits/stdc++.h>
using namespace std;


int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	int T;
	cin >> T;
	while(T--) {
		int N,K;
		cin >> N >> K;
		cout << K + (K-1)/(N-1) << endl;
	}
	return 0;
}