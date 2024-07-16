#include<bits/stdc++.h>
using namespace std;
#define ll long long

long long dfs(int v, vector<vector<int>>& adj, long long ans[], vector<vector<int>>& range) {
  long long sum = 0;
  for(int n: adj[v]) {
    sum += dfs(n,adj,ans,range);
  }
  if(sum < (ll)(range[v-1][0])) {
    ans[0]++;
    return (ll)range[v-1][1];
  }
  
  return min((ll)(range[v-1][1]), sum);

} 


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

  int T;
  cin >> T;
  while(T--) {

    int n;
    cin >> n;
    vector<vector<int>> adj(n+1);
    vector<vector<int>> range;
    for(int i=2;i<=n;i++) {
      int x;
      cin >> x;
      adj[x].push_back(i);
    }

    for(int i=0;i<n;i++) {
      int l,r;
      cin >> l >> r;
      range.push_back({l,r});
    }


    long long ans[1];
    ans[0] = 0;
    dfs(1,adj,ans, range);
    cout << ans[0] << endl;
  }
	
	return 0;
}
