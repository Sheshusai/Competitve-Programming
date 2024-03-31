#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,m;
  cin >> n >> m;
  multiset<int> s;
  for(int i=0;i<n;i++) { 
    int x; 
    cin >> x; 
    s.insert(x); 
  }
  for(int i=0;i<m;i++) {
    int t;
    cin >> t;
    multiset<int>::iterator it = s.upper_bound(t);
    if(it==s.begin())
      cout << -1 << endl;
    else{
      it--;
      cout << *it << endl;
      s.erase(it);
    }
  }
  return 0;
}
