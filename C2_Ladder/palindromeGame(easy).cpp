#include <bits/stdc++.h>
using namespace std;

int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);

  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    string s;
    cin >> s;
    int noOfZeros = 0;
    for(int i=0;i<s.size();i++) {
      if(s[i]=='0') noOfZeros++;
    }
    if(noOfZeros&1) {
      if(noOfZeros==1) cout << "BOB\n";
      else cout << "ALICE\n";
    }
    else cout << "BOB\n";
  }
  return 0;
}
