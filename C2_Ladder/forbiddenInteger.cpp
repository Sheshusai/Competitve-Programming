#include <bits/stdc++.h>
using namespace std;


int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	int T;
	cin >> T;
	while(T--){
	int n,k,x;
	cin >> n >> k >> x;
	if(x!=1) {
		cout << "YES\n" << n << endl;
		for(int i=0;i<n;i++) cout << 1 << " ";
		cout << endl;
	}
	else {
		if(k<2) {
			cout << "NO\n";
			continue;
		}
		int p = n/2;
		if(n%2==0) {
			cout << "YES\n" << p << endl;
			for(int i=0;i<p;i++) cout << 2 << " ";
				cout << endl;
		}
		else{
			p--;
			if(k<3){
				cout << "NO\n";
				continue;
			}
			cout << "YES\n" << p+1 << endl;
			for(int i=0;i<p;i++) cout << 2 << " ";
			cout << 3 << endl;
		}
	}
	}
}