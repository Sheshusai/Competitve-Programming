#include <bits/stdc++.h>
using namespace std;

void getGrayCodes(int n,vector<string> &vec) {
  if(n==1) {
    vec.push_back("0");
    vec.push_back("1");
    return;
  }
  getGrayCodes(n-1,vec);
  int size = vec.size();
  for(int i=size-1;i>=0;i--) vec.emplace_back(vec[i]);
  size *= 2;
  for(int i=0;i<size/2;i++) vec[i] = "0"+vec[i];
  for(int i=size/2;i<size;i++) vec[i] = "1"+vec[i];
}

int main() {
  int n;
  cin >> n;
  vector<string> vec;
  getGrayCodes(n,vec);
  for(int i=0;i<vec.size();i++) cout << vec[i] << endl;
  return 0;
}
