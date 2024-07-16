#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

  int T;
  cin >> T;

  while(T--) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    long long noOnes = 0;
    long long noZeros = 0;
    long long ans = 0;

    for(int i=0;i<s.size();i++) {
      char ch = s[i];
      if(ch=='0') {
        ans+= noOnes;
        noZeros+=noOnes+1;
        noOnes = 0;
      }
      else {
       ans += noZeros; 
       noOnes += noZeros+1;
       noZeros = 0;
      }
    }
    ans += s.size();
    cout << ans << endl;

  }
	
	return 0;
}
