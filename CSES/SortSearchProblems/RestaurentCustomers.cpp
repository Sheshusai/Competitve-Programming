#include <bits/stdc++.h>
using namespace std;

bool comp(int a, int b) {
  if(abs(a)<abs(b)) return true;
  else if(abs(a)>abs(b)) return false;
  else return a<b;
}

int main() {
  int n;
  cin >> n;
  vector<int> vec;
  for(int i=0;i<n;i++) {
    int a,b;
    cin >> a >> b;
    vec.push_back(a);
    vec.push_back(-b);
  }
  sort(vec.begin(),vec.end(),comp);
  int ans = 0;
  int temp = 0;
  for(int ch: vec) {
    if(ch>0) temp++;
    else temp--;
    ans = max(ans,temp);
  } 
  cout << ans;
  return 0;
}
