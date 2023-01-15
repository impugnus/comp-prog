#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> a(l);
	for(int i =0 ; i < l; i++) cin >> a[i];
	
	for(int i = 0; i < (1<<l); i++){
		for(int j = 0; j < l; j++){
			int f = 1<<j;
			
			if(i&f) cout << a[j] << " ";
		}
		cout << endl;
	}

	return 0;
}
