#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b==0) return a;
	return gcd(b,a%b);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<int> vec;
	for(int i=0;i<n;i++) cin >> arr[i];
	int ans = 0;
	vec.push_back(arr[0]);
	for(int i=0;i<n-1;i++) {
		if(gcd(arr[i],arr[i+1])==1) {
			vec.push_back(arr[i+1]);
		}
		else {
			ans++;
			vec.push_back(1);
			vec.push_back(arr[i+1]);
		}
	}
	cout << ans << endl;
	for(int i=0;i<vec.size();i++) cout << vec[i] << " ";
	return 0;
}