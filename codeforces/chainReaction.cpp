#include<bits/stdc++.h>
using namespace std;

int rec()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
	int ans = rec(0,n,arr);
	return 0;
}