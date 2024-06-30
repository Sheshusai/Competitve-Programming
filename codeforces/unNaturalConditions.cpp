#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n,m;
	cin >> n >> m;
	
	string a = "", b = "";
	for(int i=0;i<n;i++) a.push_back('8');
	for(int i=0;i<n-1;i++) b.push_back('1');
	b.push_back('2');
	cout << a << endl << b ;
	return 0;
}