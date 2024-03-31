#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	map<char,int> mp;
	cin >> s;
	for(int i=0;i<(int)s.size();i++) {
		mp[s[i]]++;
	} 
	int t=0;
	char ch='0';
	int length=0;
	for(map<char,int>::iterator it=mp.begin();it!=mp.end();it++) {
		if(it->second&1) {
			t++;
			length = it->second;
			ch = it->first;
		}
		if(t>1) {
			cout << "NO SOLUTION";
			return 0;
		}
	}
	string str = "";
	string mid = "";
	while(length) {
		mid.push_back(ch);
		length--;
	}
	for(auto it=mp.begin();it!=mp.end();it++) {
		if(it->first!=ch){
			int temp = it->second/2;
			while(temp) {
				str.push_back(it->first);
				temp--;
			}
		}
	}
	
	string rev = str;
	reverse(rev.begin(),rev.end());
	cout << str << mid << rev;
	
	
	 return 0;
}