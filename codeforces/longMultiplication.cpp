#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		string a,b;
		cin >> a >> b;
		string ans1 = "";
		string ans2 = "";
		bool flag = false;
		for(int i=0;i<(int)a.size();i++) {
			int t1 = a[i]-'0';
			int t2 = b[i] - '0';
			if(t1>t2) {
				if(flag){
					ans1.push_back(t2+'0');
					ans2.push_back(t1+'0');
				}
				else{
					ans1.push_back(t1+'0');
					ans2.push_back(t2+'0');
					flag = true;
				}
			}
			else if(t2>t1) {
				if(flag) {
					ans1.push_back(t1+'0');
					ans2.push_back(t2+'0');
				}
				else{
					ans1.push_back(t2+'0');
					ans2.push_back(t1+'0');
					flag = true;
				}
			}
			else{
				ans1.push_back(t1+'0');
				ans2.push_back(t2+'0');
			}
		}
		cout << ans1 << endl;
		cout << ans2 << endl;
	}
	return 0;
}