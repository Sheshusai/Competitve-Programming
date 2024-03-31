#include <bits/stdc++.h>
using namespace std;

char solve(long long N) {
  long long curr = 0;
  long long i = 1;
  long long t = 9;
  while(true) {
    if(N<=(curr+t*i)) break;
    curr += t*i;
    i++;
    t *= 10;
  }

  curr = N-curr-1;
  string s = to_string((curr/i)+t/9);
  return s[curr%i];
}

int main() {
  int T;
  cin >> T;
  while(T--) {
    long long N;
    cin >> N;
    cout << solve(N) << endl; 
  }
  return 0;
}
