#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	string ans = "";
	int i=0;
	for(;i<n-1;i++) {
		if(s[i]>s[i+1]) break;
		ans.push_back(s[i]);
	}
	i++;
	for(;i<n;i++) ans.push_back(s[i]);
	cout << ans ;
	return 0;
}