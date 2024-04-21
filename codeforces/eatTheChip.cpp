#include <bits/stdc++.h>
using namespace std;

string solve(int h,int w,pair<int,int> &a,pair<int,int> &b) {
  
  int diff = b.first - a.first;
  if(diff<=0) return "Draw";

  if(diff&1) {
    if(a.second == b.second) return "Alice";
    int t ;
    if(a.second<b.second) t = w - a.second;
    else t = a.second - 1;
    if(diff>=2*t) return "Alice";
    return "Draw";
  }
  else{
    if(a.second == b.second) return "Bob";
    int t;
    if(a.second<b.second) t = b.second - 1;
    else t = w - b.second;
    if(diff >= 2*t) return "Bob";
    return "Draw";
  }

}


int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);

  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);

  int T;
  cin >> T;
  while(T--) {
    int h,w;
    pair<int,int> a,b;
    cin >> h >> w >> a.first >> a.second >> b.first >> b.second;

    cout << solve(h,w,a,b) << endl;
  }


  return 0;
}


