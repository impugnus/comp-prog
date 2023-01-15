#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l; cin >> l;
	vector<int> a(l+1);
	for(int i = 1; i <= l; i++) cin >> a[i];
	
	int res = 0;
	for(int i = 1; i <= l; i++) res^=a[i], res^=i;
	
	int setBit = res & ~(res-1);
	
	int L = 0, R = 0;
	for(int i = 1; i <= l; i++){
		if(a[i]&setBit) L^=a[i];
		else R^=a[i];
	}
	
	for(int i = 1; i <= l; i++){
		if(i&setBit)L^=i;
		else R^=i;
	}
	
	bool isMissing = true;
	for(int i =1 ; i<=l;i++){
		if(a[i]==L){
			isMissing=false;
			break;
		}
	}
	
	if(isMissing) cout << "Missing number: = " << L << " - Repeating number = " << R << endl;
	else cout << "Missing number: = " << R << " - Repeating number = " << L << endl;
	
	return 0;
}
