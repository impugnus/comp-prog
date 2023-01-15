#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

const int MAX = 1e5;

using namespace std;

vector<int> t(MAX), l(MAX);

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, L, a;
	cin >> n >> L >> a;
	
	int breaks = 0;
	
	for(int i = 0; i < n ; i++){
		cin >> t[i] >> l[i];
	}
	
	if(n == 0){
		cout << L / a << "\n";
		return 0;
	}
	
	breaks+=t[0]/a;
	
	for(int i = 0; i < n -1; i++){
		int gap = t[i+1] - (t[i] + l[i]);
		breaks+=gap/a;
	}
	
	breaks+=(L - (t[n-1] + l[n-1]))/a;
	
	cout << breaks << "\n";

	return 0;
}
