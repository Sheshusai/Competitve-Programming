#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int q;
	cin >> q;
	while(q--) {
		int n;
		cin >> n;
		int arr[4*n];
		for(int i=0;i<4*n;i++) cin >> arr[i];
		sort(arr,arr+4*n);
		int i=0, j=4*n-1;
		bool flag = true;
		int area = arr[i]*arr[j];
		while(i<j) {
			if(arr[i]!=arr[i+1] || arr[j]!=arr[j-1]) {
				flag = false;
				cout << "NO\n";
				break;
			}
			int temp = arr[i]*arr[j];
			if(temp != area) {
				cout << "NO\n";
				flag = false;
				break;
			}
			i = i+2;
			j = j-2;
		}
		if(flag) cout << "YES\n";
	}
	return 0;
}