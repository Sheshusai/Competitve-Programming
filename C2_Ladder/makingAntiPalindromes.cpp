#include <bits/stdc++.h>
using namespace std;

int solve(int N,string s) {
	if(N&1) return -1;
	vector<int> cnt(26,0);
	for(int i=0;i<N;i++) {
		cnt[s[i]-'a']++;
		if(cnt[s[i]-'a']>N/2) return -1;
	}
	int pairs = 0;
	int maxi = 0;
	vector<int> m(26,0);
	for(int i=0;i<N/2;i++) {
		if(s[i]==s[N-i-1]) {
			pairs++;
			m[s[i]-'a']++;
			maxi = max(maxi,m[s[i]-'a']);
		}
	}
	if(maxi*2>=pairs) return maxi;
	return (pairs+1)/2;

}


int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		string s;
		cin >> s;
		cout << solve(N,s) << endl;
	}
	return 0;
}