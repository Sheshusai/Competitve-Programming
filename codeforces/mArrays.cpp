#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	// given an array of size n and an integer m
	// divide the array into multiple arrays in any order
	// such that all arrays are m divisible 
	// an array is said to be m divisible if the sum of the any
	// two adjacent elements is divsible by m or it contains 
	// only one element
	
	// solution
	// take the mod of all elements in the array and store them
	// in a map with mod as key and no of elements as value
	// if the mod is 0 all the elements can form an array
	// if the mod*2 == m again all elements can form an array
	// iterate over the map the mod and m-mod elements can
	// differ at most by 1 so the answer increases by
	// max(0,|cntx-cnty|-1);
	
	
	int T;
	cin >> T;
	while(T--) {
		int n,m;
		cin >> n >> m;
		map<int,int> mp;
		for(int i=0;i<n;i++) {
			int x;
			cin >> x;
			mp[x%m]++;
		}
		int ans = 0;
		for(auto &cnt: mp) {
			
			if(cnt.first==0) ans+=1;
			else if(2*cnt.first==m) ans++;
			else if(2*cnt.first<m || mp.find(m-cnt.first)==mp.end()) {
				int a = cnt.second;
				int b = mp[m-cnt.first];
				ans += 1 + max(0,abs(a-b)-1);
			}
		}
		cout << ans << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}