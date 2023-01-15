#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l, p; cin >> l;
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];

	cin >> p;
	
	bool flag = false;
	for(int i = 0; i < (1<<l);i++){
		int sum = 0;
		
		for(int j = 0; j < l; j++){
			int f = 1<<j;
			if(i&f)sum+=a[j];
		}
		
		if(sum==p){
			flag=true;
			break;
		}
	}


	cout << (flag ? "YES\n" : "NO\n");
	return 0;
}
