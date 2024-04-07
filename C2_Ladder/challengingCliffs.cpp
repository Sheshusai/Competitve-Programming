#include <bits/stdc++.h>
using namespace std;


int main() {
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int T;
  cin >> T;
  while(T--) {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin >> arr[i];
    sort(arr,arr+N);
    int a = 0;
    int b = 1;
    for(int i=1;i<N-1;i++) {
      if(abs(arr[b]-arr[a])>abs(arr[i+1]-arr[i])) {
        
       a = i;
       b = i+1;
      }
    }
    //cout << a << " " << b << endl;
    cout << arr[a] << " ";
    for(int i=b+1;i<N;i++) cout << arr[i] << " ";
    for(int i=0;i<a;i++) cout << arr[i] << " ";
    cout << arr[b] << " ";
    cout << endl;
  }
  return 0;
}
