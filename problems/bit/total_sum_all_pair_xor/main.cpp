#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

#define MAXN 105

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int ar[MAXN]={0};
	int n; cin >> n;
	for(int i =0 ; i < n; i++) cin >> ar[i];

	int res = 0;
	
	for(int i = 0; i < 31; i++){
		int cntZ = 0, cntO = 0;
		
		for(int j = 0; j < n; j++){
			if(ar[j] & (1<<i)) cntO++;
			else cntZ++;
		}
		
		int p = cntZ * cntO;
		res+=(1<<i)*p;
	}
	
	cout << res << endl;

	return 0;
}
