#include<bits/stdc++.h>
using namespace std;


int maxProd(int n) {
	if(n==0) return 1;
	if(n<10) return n;
	
	int digit = n%10;
	if(digit) return max(maxProd(n/10)*digit,maxProd((n/10)-1)*9);
	else return maxProd((n/10)-1)*9;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	cout << maxProd(n);
	return 0;
}