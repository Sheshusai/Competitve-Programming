#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[],int n) {
	for(int i=0;i<n-1;i++) 
		if(arr[i]>arr[i+1]) return false;
	return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	int arr[2*n];
	for(int i=0;i<2*n;i++) cin >> arr[i];
	
	int temp[2*n];
	copy(arr,arr+2*n,temp);
	int moves = INT_MAX;
	int move = 0;
	bool flag = true;
	while(true) {
		if(isSorted(temp,2*n)) {
			moves = min(moves,move);
			break;
		}
		move++;
		if(flag) {
			for(int i=0;i<2*n-1;i+=2) 
				swap(temp[i],temp[i+1]);
		}
		else {
			for(int i=0;i<n;i++) {
				swap(temp[i],temp[n+i]);
			}
		}
		// for(int i=0;i<2*n;i++) cout << temp[i] << " ";
		// cout << endl;
		flag = !flag;
		if(equal(temp,temp+2*n,arr)) break;
		
	}
	
	if(moves == INT_MAX) cout << -1 << endl;
	else{
		cout << ((n&1)? min(moves,2*n-moves): min(moves,4-moves)) <<endl;
	}
	return 0;
}