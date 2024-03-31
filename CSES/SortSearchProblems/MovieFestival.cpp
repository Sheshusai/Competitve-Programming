#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<pair<int,int>> vec;
  for(int i=0;i<n;i++) {
    int a,b;
    cin >> a >> b;
    vec.push_back({a,b});
  }
  sort(vec.begin(),vec.end());
  int id = vec[0].second;
  int ans = 1;
  for(int i=1;i<vec.size();i++){
    if(vec[i].first>=id){
      ans++;
      id = vec[i].second;
    }
    else {
      if(id>vec[i].second)
     id = vec[i].second; 
    }
  }
  cout << ans;
  return 0;
}
