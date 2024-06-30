#include<bits/stdc++.h>
using namespace std;

bool isAlpha(char ch) {
	return ((ch>='a' && ch<='z')|| (ch>='A' && ch<='Z'));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	string s;
	getline(cin,s);
	int isps = 0;
	for(int i=0;i<(int)s.size();i++) {
		char ch = s[i];
		if( isps == 1 && isAlpha(ch)) {
			cout << " "+string(1,ch);
			isps = 0;
		}
		else if(isps == 0 && isAlpha(ch)){
			cout << ch ;
		}
		else if(ch == ' ') isps = 1;
		else {
			cout << ch ;
			isps = 1;
		}
	}
	return 0;
}