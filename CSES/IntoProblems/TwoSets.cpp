#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long n;
	cin >> n;
	long long sum = (n*(n+1))/2;
	vector<long long> v1;
	vector<long long> v2;
	if(sum&1) {
		cout << "NO";
		return 0;
	}
	else{
		long long t = sum/2;
		for(int i=n;i>=1;i--){
			if(i<=t) {
				v1.push_back(i);
				t -= i;
			}
			else v2.push_back(i);
		}
	}
	cout << "YES\n";
	cout << v1.size() << endl;
	for(int i=0;i<(int)v1.size();i++){
		cout << v1[i] ;
		if(i!=(int)v1.size()-1) cout << " ";
	}
	cout << endl;
	cout << v2.size() << endl;
	for(int i=0;i<(int)v2.size();i++) {
		cout << v2[i];
		if(i!=(int)v2.size()-1) cout << " ";
	}
	 
	return 0;
}
