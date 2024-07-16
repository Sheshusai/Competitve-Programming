#include<bits/stdc++.h>
using namespace std;

int dfs(int c, int p, int k, int dps, vector<int> adj[]) {

  int ans = 0;
  if(dps >= k) ans++;
  for(int x: adj[c]) {
    if(x == p) continue;
    ans += dfs(x,c,k,dps+1,adj);
  }
  return ans;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

  int N, K;
  cin >> N >> K;
  vector<int> adj[N+1];
  for(int i = 1;i<N;i++) {
    int a,b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  int ans = INT_MAX;
  if(K%2 == 0) {
  for(int i=1;i<=N;i++) {
    int cnt = 0;
    for(int x: adj[i]) {
      cnt += dfs(x,i,K/2,0, adj);
    }
    ans = min(ans,cnt);
  }
  }
  else {
    for(int i = 1; i <= N ;i++) {
      for(int x: adj[i]) {
        int cnt = 0;
        cnt = dfs(x,i,(K+1)/2,0,adj) + dfs(i,x,(K+1)/2,0,adj);
        ans = min(ans,cnt);

      }
    }
  }
  cout << ans;
	
	return 0;
}
