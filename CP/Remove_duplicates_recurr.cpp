#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(char str[]) {
  if(str[1]==0) return;
  removeDuplicates(str+1);
  if(str[0] == str[1]) {
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

  char str[1004];
  scanf("%s",str);
  removeDuplicates(str);
  printf("%s",str);
  return 0;
}
