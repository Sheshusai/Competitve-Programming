#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n,p;
	cin >> n >> p;
	vector<string> vec(n);
	for(int i=0;i<n;i++) cin >> vec[i];
	reverse(vec.begin(),vec.end());
	long long ans = 0;
	long long apples = 0;
	for(int i=0;i<n;i++) {
		if(vec[i] == "halfplus") {
			apples = apples*2 + 1;
			ans += (apples/2)*p + p/2;
		}
		else {
			apples = apples*2;
			ans += (apples/2)*p;
		}
	}
	cout << ans;
	
		

	return 0;
}
