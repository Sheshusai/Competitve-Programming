#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		string a,b;
		cin >> a >>b;
		int ones = 0;
		int zeros = 0;
		a.push_back('0');
		b.push_back('0');
		
		bool flag = true;
		for(int i=0;i<N;i++) {
			if(a[i]=='1') ones++;
			else zeros++; 
			if((a[i]==b[i]) != (a[i+1]==b[i+1])) {
				if(ones!=zeros) {
					flag = false;
					break;
				}
			}
		}
		if(flag) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}