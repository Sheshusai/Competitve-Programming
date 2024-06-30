#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		if(n==1) {
			cout << "a" << endl;
			continue;
		}
		if(n&1) {
			n = n-2;
			int l = (n-1)/2+1;
			int r = l-1;
			string ans = "";
			for(int i=0;i<l;i++) ans+= "a";
			ans += "bc";
			for(int i=0;i<r;i++) ans+="a";
			cout << ans << endl;
		}
		else {
			n = n-1;
			int l = (n-1)/2 + 1;
			int r = l-1;
			string ans = "";
			for(int i=0;i<l;i++) ans += "a";
			ans += "b";
			for(int i=0;i<r;i++) ans += "a";
			cout << ans << endl;
		}
	}
	return 0;
}