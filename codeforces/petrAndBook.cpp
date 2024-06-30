#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	int arr[8];
	int sum = 0;
	for(int i=1;i<=7;i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int div = (n/sum);
	int rem = n - (sum*div);
	int ans = 0;
	if(rem == 0) {
		for(int i=1;i<=7;i++) if(arr[i]) ans = i;
	}
	else{
		for(int i=1;i<=7;i++) {
			if(arr[i] && rem<=arr[i]) {
				ans = i;
				break;
			}
			rem = rem-arr[i];
		}
	}
	cout << ans;
	
	
	return 0;
}