#include <bits/stdc++.h>
using namespace std;

void getMinDiff(long long arr[], long long &n,long long &m,long long &A,long long count,long long &sum) {
  if(count == n) {
    m = min(m,abs(A-(sum-A)));
    return;
  }
  long long temp = arr[count];
  A += temp;
  getMinDiff(arr,n,m,A,count+1,sum);
  A -= temp;
  getMinDiff(arr,n,m,A,count+1,sum);
}

int main() {
  long long n;
  cin >> n; 
  long long arr[n];
  long long sum = 0;
  for(long long &x: arr) {
    cin >> x;
    sum += x;

  } 
  long long m = LLONG_MAX;
  long long A=0;
  getMinDiff(arr,n,m,A,0,sum);
  cout << m << endl;

  return 0;
}
