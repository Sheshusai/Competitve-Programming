#include <bits/stdc++.h>
using namespace std;


int main() {
  
  int t;
  cin >> t;
  while(t--) {
   int a,b;
   cin >> a >> b;
   string s;

   while(a && b) {
     s.push_back('0');
     s.push_back('1');

     a--,b--;
   }
   while(a) {
     s.push_back('0');
     a--;
   }
   while(b) {
     s.push_back('1');
     b--;
   }
   cout << s << endl;

  }
  return 0;
}
