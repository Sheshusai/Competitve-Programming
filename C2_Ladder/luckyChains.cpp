#include <bits/stdc++.h>
using namespace std;

vector<int> primes(1e7+5);
vector<int> absPrimes;

// int gcd(int a,int b) {
// 	if(b==0) return a;
// 	return gcd(b,a%b);
// }

vector<int> getPrimes(int ele) {
	vector<int> p;
	while(ele>1){
		if(p.empty()||p.back()!=primes[ele])
			p.emplace_back(primes[ele]);
		ele = ele/primes[ele];
	}
	return p;
}

int solve(int x,int y) {
	if(y-x<=1) return -1;
	int p = y-x;
	int t=INT_MAX;
	for(int i:getPrimes(p)){
		int id = x%i;
		if(id==0) {
			t = 0;
			break;
		}
		else t = min(t,i-id);

	}
	
	return t;
}

int main() {
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n = (int)1e7+5;
	for(int i=0;i<n;i++) primes[i] = i;
	for(int i=2;i<n;i++) {
		if(primes[i]!=i) continue;
		for(int j=2*i;j<n;j+=i) primes[j] = min(j,i); 
	}
	
	int T;
	cin >> T;
	while(T--) {
		int x,y;
		cin >> x >> y;
		// cout << gcd(10088,20079) << endl;
		
		cout << solve(x,y) << endl;
	}


	return 0;
}