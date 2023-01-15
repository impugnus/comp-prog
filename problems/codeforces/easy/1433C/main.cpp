#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void test_case(){
	int l = 0; cin >> l;
	
	vector<int> a(l);
	
	int mx = 0;
	for(int i = 0; i < l; i++){cin >> a[i]; if(a[i]>mx)mx=a[i];}
	
	int idx = -1;
	for(int i = 0; i < l; i++){
		if(a[i]!=mx) continue;
		if(i>0 && a[i-1] != mx) { idx=i+1; break; }
		if(i < l -1 && a[i+1] != mx) {idx=i+1; break;}
	}
	
	cout << idx << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t = 0; cin >> t;
	while(t--) test_case();

	return 0;
}
