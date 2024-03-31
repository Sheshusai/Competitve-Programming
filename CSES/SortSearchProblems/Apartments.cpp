#include <bits/stdc++.h>
using namespace std;



int main() {
  int n,m,k;
  cin >> n >> m >> k;
  int applicants[n];
  int apartments[m];
  for(int i=0;i<n;i++) cin >> applicants[i];
  for(int j=0;j<m;j++) cin >> apartments[j];
  sort(applicants,applicants+n,greater<int>());
  sort(apartments,apartments+m,greater<int>());
  int i=0,j=0;
  int count = 0;
  while(i<n && j<m) {
    if(abs(applicants[i]-apartments[j])<=k) {
      i++;j++;count++;
    }
    else{
      if(applicants[i]>apartments[j]+k) i++;
      else j++;
    }
  }
  cout << count;
  return 0;
}
