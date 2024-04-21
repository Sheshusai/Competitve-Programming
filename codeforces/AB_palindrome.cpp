#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int a,b;
		cin >> a >> b;
		string s;
		cin >> s;
		int n = s.size();
		bool flag = false;
		for(int i=0;i<n/2;i++) {
			int j = n-i-1;
				if(s[i]=='?' && s[j]!='?') {
					s[i] = s[j];
					if(s[i]=='1') b-= 2;
					else a -= 2;
				}
				else if(s[i]!='?' && s[j]=='?') {
					s[j] = s[i];
					if(s[i]=='1') b -= 2;
					else a -= 2;
				}
				else if(s[i]!='?' && s[j]!='?') {
					if(s[i]!=s[j]) {
						flag = true;
						break;
					}
					if(s[i]=='1') {
						b -= 2;
					}
					else a -= 2;
				}
		}
		if(n&1) {
			if(s[n/2]=='0') a--;
			if(s[n/2]=='1') b--;
		}
		if(a<0 || b<0 || flag) {
			cout << -1 << endl;
			continue;
		}
		
		for(int i=0;i<n/2;i++) {
			int j = n-i-1;
			if(s[i]=='?' && s[j]=='?') {
					if(a>=2) {
						s[i] = '0';
						s[j] = '0';
						a -= 2;
					}
					else if(b>=2) {
						s[i] = '1';
						s[j] = '1';
						b -= 2;
					}
					else {
						flag = true;
						break;
					}
			}
		}
		if(n&1) {
			if(s[n/2]=='?') {
				if(a>0) s[n/2] = '0';
				else if(b>0) s[n/2] = '1';
				else {
					flag = true;
				}
			}
		}
		if(flag) {
			cout << -1 << endl;
			continue;
		}
		cout << s << endl;
	}
	return 0;
}