#include<bits/stdc++.h>
using namespace std;

long long findPower(long long a, long long div) {
	long long cnt = 0;
	while(a && !(a%div)) {
		a = a/div;
		cnt++;
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	long long n;
	cin >> n;
	pair<long long,long long> zero;
	vector<vector<long long>> arr(n+1,vector<long long>(n+1,0));
	long long ans = LLONG_MAX;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++) {
			cin >> arr[i][j];
			if(arr[i][j]==0 && ans==LLONG_MAX) {
				ans = 1;
				zero = {i, j};
			}
		}
	vector<vector<long long>> dp2(n+1,vector<long long>(n+1,0));
	vector<vector<long long>> dp5(n+1,vector<long long>(n+1,0));
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			if(i==1){
				dp2[i][j] = dp2[i][j-1]+findPower(arr[i][j],2);
				dp5[i][j] = dp5[i][j-1]+findPower(arr[i][j],5);
			}
			else if(j==1){
				dp2[i][j] = dp2[i-1][j]+findPower(arr[i][j],2);
				dp5[i][j] = dp5[i-1][j]+findPower(arr[i][j],5);
			}
			else{
				dp2[i][j] = min(dp2[i-1][j]+findPower(arr[i][j],2),dp2[i][j-1]+findPower(arr[i][j],2));;
				dp5[i][j] = min(dp5[i-1][j]+findPower(arr[i][j],5),dp5[i][j-1]+findPower(arr[i][j],5));;
			}
		}
	}
	long long temp = min(dp2[n][n],dp5[n][n]);
	
	if(ans<temp){
		cout << ans << endl;
		string path = "";
		int i= zero.first;
		int j= zero.second;
		for(int k =1;k<i;k++) path.push_back('R');
		for(int k=1;k<j;k++) path.push_back('D');
		for(int k=1;k<=(n-i);k++) path.push_back('R');
		for(int k=1;k<=(n-j);k++) path.push_back('D');
		cout << path << endl;
	}
	else{
		cout << temp << endl;
		string path = "";
		if(dp2[n][n]<dp5[n][n]) {
			int i=n,j=n;
			while(i!=1 || j!=1) {
				if(i==1) {
					path.push_back('R');
					j = j-1;
				}
				else if(j==1){
					path.push_back('D');
					i = i-1;
				}
				else if(dp2[i-1][j]<dp2[i][j-1]) {
					i = i-1;
					path.push_back('D');
				}
				else {
					j = j-1;
					path.push_back('R');
				}
				
			}
			reverse(path.begin(),path.end());
			cout<< path << endl;
		}
		else {
			int i=n,j=n;
			while(i!=1 || j!=1) {
				if(i==1) {
					path.push_back('R');
					j = j-1;
				}
				else if(j==1){
					path.push_back('D');
					i = i-1;
				}
				else if(dp5[i-1][j]<dp5[i][j-1]) {
					i = i-1;
					path.push_back('D');
				}
				else {
					j = j-1;
					path.push_back('R');
				}
				
			}
			reverse(path.begin(),path.end());
			cout<< path << endl;
		}
	}
	return 0;
}