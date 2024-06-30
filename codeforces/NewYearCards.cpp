#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n;
	cin >> n;
	vector<vector<int>> prefF(n+1,vector<int>(n+1,INT_MAX));
	vector<int> prefMe(n+1,INT_MAX);
	vector<int> ans(n+1,INT_MAX);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			int x;
			cin >> x;
			prefF[i][x] = j;
		}
	}
	for(int i=1;i<=n;i++){
		int x; cin >> x;
		prefMe[x] = i;
	}
	int fp = 0;
	int sp = 0;
	for(int i=1;i<=n;i++) {
		if(prefMe[fp]>prefMe[i]) {
			sp = fp;
			fp = i;
		}
		else if(prefMe[sp]>prefMe[i]) sp = i;
		for(int j=1;j<=n;j++){
			if(fp==j){
				if(ans[j]==INT_MAX) ans[j] = sp;
				else if(prefF[j][sp]<prefF[j][ans[j]]) ans[j] = sp;
			}
			else {
				if(ans[j]==INT_MAX) ans[j] = fp;
				else{
					if(prefF[j][fp]<prefF[j][ans[j]]) ans[j] = fp;
				}
			}
		}
		// for(int i=1;i<=n;i++) cout << ans[i] << " ";
		// cout << endl;
		
	}
	for(int i=1;i<=n;i++) cout << ans[i] << " ";
	cout << endl;
	
	return 0;
}