#include<bits/stdc++.h>
using namespace std;



const int N = 1e6+7;
int parent[N];
int bribe[N];


int find(int x) {
 if(parent[x] == x) return x;
 return parent[x] = find(parent[x]);
}

inline int read() {
int x = 0, f = 1; char ch=getchar();
while(!isdigit(ch)) { if(ch == '-') f = -1; ch = getchar();}
while(isdigit(ch)) x=x*10+(ch^48),ch=getchar();
return x*f; 
}


int main() {

  int n, m;
  n = read(); m = read();
  
  for(int i = 1; i <= n; i++) bribe[i] = read();
  for(int i=1;i<=n;i++) parent[i] = i;

  for(int i=0;i<m;i++) {
    int x, y;
    x = read(), y = read();
    x = find(x);
    y = find(y);
    parent[y] = x;
    bribe[x] = min(bribe[x],bribe[y]);
  }
  long long ans = 0;
  for(int i=1;i<=n;i++) if(parent[i]==i) ans += bribe[i];
  cout << ans;

	
	return 0;
}
