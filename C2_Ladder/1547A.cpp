#include <bits/stdc++.h>
using namespace std;


int main() {
  int t;
  cin >> t;
  while(t--) {
    int ans = 0;
    vector<vector<int>> vec(3,vector<int>(2,0));
    for(int i=0;i<3;i++){
      for(int j=0;j<2;j++) cin >> vec[i][j]; 
    }
    if((vec[0][0]==vec[1][0]) && vec[1][0]==vec[2][0]) {
      if(vec[2][1]<vec[0][1] && vec[2][1])
    }
  }
  return 0;
}
