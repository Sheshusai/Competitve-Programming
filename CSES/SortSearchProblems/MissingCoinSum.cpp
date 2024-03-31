#include <bits/stdc++.h>
using namespace std;


int main() {
  int n;
  cin >> n;
  vector<long long> arr(n);
  for(long long &x:arr) cin >> x;
  sort(arr.begin(),arr.end());
  long long s = 0;
  long long t = 1;
  for(int i=0;i<n;) {
    if(arr[i]!=t){
      cout << s+1;
      return 0;
    }
    while(arr[i]==t) {
      s+= arr[i];
      i++;
    }
    t++;
  }
  cout << s+1;
  return 0;
}
