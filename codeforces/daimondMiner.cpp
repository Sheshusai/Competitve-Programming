#include<bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		vector<int> x, y;
		for(int i=0;i<2*N;i++) {
			int a,b;
			cin >> a >> b;
			if(a==0) y.emplace_back(abs(b));
			if(b==0) x.emplace_back(abs(a));
		}
		sort(x.begin(),x.end());
		sort(y.begin(),y.end());
		double ans = 0;
		for(int i=0;i<N;i++) {
			ans = ans + sqrt(1.0*x[i]*x[i] + 1.0*y[i]*y[i]);
		}
		printf("%.15lf\n",ans);
	}
	
	
	return 0;
}