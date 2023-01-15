#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void gen(vector<int>&a, int n){
	a[0]=0; a[1]=1;
	
	for(int i = 2; i < 45; i++){
		a[i] = a[i-2]+a[i-1];
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n = 0; cin >> n;
	vector<int>a(100000);
	gen(a, n);
	
	for(int i = 0; i < 45; i++){
		for(int j = 0; j < 45; j++){
			if(a[i]+a[j]==n){
				cout << "YES\n";
				return 0;
			}
		}
	}

	cout << "NO\n";
	return 0;
}
