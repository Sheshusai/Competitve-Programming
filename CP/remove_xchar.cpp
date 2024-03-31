#include <bits/stdc++.h>
using namespace std;

void removeX(char str[]) {
  if(str[0] == 0) return;
  removeX(str+1);
  if(str[0] == 'x') {
    int i=1;
    for(;str[i]!=0;i++) {
      str[i-1] = str[i];
    } 
    str[i-1] = str[i];
  }
}

int main() {
  
  #ifndef IN 
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

  char str[1000];
  cin >> str;
  removeX(str);
  cout << str << endl;

  return 0;
}
