#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int arr[n+2];
		for(int i=0;i<n+2;i++) cin >> arr[i];
		sort(arr,arr+n+2);
		long long sum = 0;
		for(int i=0;i<n;i++) sum += arr[i];
		bool flag = true;
		if(sum != arr[n] && sum != arr[n+1]) {
			int mini = min(arr[n],arr[n+1]);
			int maxi = max(arr[n],arr[n+1]);
			sum = sum + mini;
			sum = sum - maxi;
			for(int i=0;i<n;i++) {
				if(arr[i]==sum) {
					arr[i] = mini;
					flag = false;
					break;
				}
			}
		}
		else flag = false;
		if(flag) cout << -1 << endl;
		else {
			sort(arr,arr+n);
			for(int i=0;i<n;i++) {
				cout << arr[i] << " " ;
			}
			cout << endl;
		}
	}
	return 0;
}