#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	
	int n;
	cin >> n;
	int arr[n+1];
	for(int i=1;i<=n;i++) cin >> arr[i];
	int sum = 0;
	vector<pair<int,int>> vec;
	int j = 1;
	int i = 1;
	for(;i<=n;i++) {
		if(sum+arr[i] != 0) sum+= arr[i];
		else if(i>1 && sum!=0){
			vec.push_back({j,i-1});
			sum = arr[i];
			j = i;
		}
	}
	if(j<=i && sum != 0) vec.push_back({j,i-1});
	if(vec.size()==0) {
		cout << "NO";
		return 0;
	}
	else {
		cout << "YES" << endl << vec.size() << endl;
		for(int i=0;i<vec.size();i++) {
			cout << vec[i].first << " " << vec[i].second << endl;
		}
	}
	return 0;
}