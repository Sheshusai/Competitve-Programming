#include <iostream>
using namespace std;

int main()
{

  // #ifndef IN
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  int N;
  cin >> N;

  while (N--)
  {

    long long r, c;
    long long ans;

    cin >> r >> c;
    long long m = max(r, c);
    ans = m * m;
    long long temp = (r - 1) + (m - c);
    if (m & 1)
    {
      ans = ans - temp;
    }
    else
    {
      //ans = (m - 1) * (m - 1) + 1;
      //ans = ans + temp;
      temp = (c-1)+ (m-r);
      ans = ans -temp;
    }
    cout << ans << endl;
  }

  return 0;
}
