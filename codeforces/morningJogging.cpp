#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int n,m;
		cin >> n >> m;
		priority_queue<int> pq;
		int arr[n][m];
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> arr[i][j];
				if((int)pq.size()!=m) pq.push(arr[i][j]);
				else if(pq.top()>arr[i][j]){
					pq.pop();
					pq.push(arr[i][j]);
				}
			}
		}
		int k = 0;
		multiset<int> ms;
		while(!pq.empty()) {
			ms.insert(pq.top());
			pq.pop();
		}
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				while(ms.find(arr[i][j]) != ms.end()) {
					ms.erase(ms.find(arr[i][j]));
					swap(arr[i][j],arr[i][k]);
					arr[i][k] = -arr[i][k];
					k++;
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cout << abs(arr[i][j]) << " ";
			cout << endl;
		}
		
		
	}
	return 0;
}