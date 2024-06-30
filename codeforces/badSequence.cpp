#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	int id = -1;
	for(int i=0;i<s.size();i++) {
		if(s[i]=='(') cnt++;
		else if(s[i]==')') cnt--;
		if(cnt == -1) {
			id = i;
			break;
		}
	}
	if(id==-1 && cnt==0) {
		cout << "Yes";
		exit(0);
	}
	cnt = 0;
	for(int i=0;i<s.size();i++) {
		if(i!=id) {
			if(s[i]=='(') cnt++;
			else if(s[i]==')') cnt--;
			if(cnt == -1) {
				cout << "No";
				exit(0);
			}
		}
	}
	// cout << cnt << " " << id << endl;
	if(cnt==1 && id>=0) cout << "Yes";
	else cout << "No";
	return 0;
}