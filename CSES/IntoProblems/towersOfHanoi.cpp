#include <bits/stdc++.h>
using namespace std;

void ToH(int Disks,int source,int middle, int destination) {
  if(Disks == 1) {
    cout << source << " " << destination << endl;
    return;
  }
  ToH(Disks-1,source,destination,middle);
  cout << source << " " << destination << endl;
  ToH(Disks-1,middle,source,destination);
}
int main() {
  int Disks;
  cin >> Disks;

  cout << pow(2,Disks) -1 << endl;
  ToH(Disks,1,2,3);

  return 0;
}
