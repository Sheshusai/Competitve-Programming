#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n;
  cin >> n;
  long long temp = (n*(n+1))/2;
  if(temp%2) cout << "NO";
  else cout << "YES";

  return 0;
}
