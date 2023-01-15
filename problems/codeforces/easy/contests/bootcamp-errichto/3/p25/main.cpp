#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

const int m = std::numeric_limits<int>::max();

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	
	int min =  m;
	int midx = 0;
	for(int i = 0; i < n; i++){
		if(a[i] < min) { min=a[i]; midx=i;}
	}
	
	cout << midx << "\n";
	
	return 0;
}
