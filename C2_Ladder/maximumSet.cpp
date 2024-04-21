#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int l,int r) {
	vector<int> sol;
	int k = 1;
	while((l << k) <= r) {
		k++;
	}
	int ans = r/(1 << (k - 1)) - l + 1;
	if(k>1)
		ans += (k-1) * max(0, r/((1 << (k - 2))*3) - l + 1);

	sol.push_back(k);
	sol.push_back(ans);
	return sol;
}

int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int T;
	cin >> T;
	while(T--) {
		int l, r;
		cin >> l >> r;
		vector<int> sol = solve(l, r);
		cout << sol[0] << " " << sol[1] << endl;
	}
	return 0;
}