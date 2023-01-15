#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	vector<int> a(l);
	for(int i = 0; i < l; i++) cin >> a[i];
	
	sort(a.begin(), a.end());
	
	int c = 1, last=a[0], ans=0;
	for(int i = 1;i < l;i++){
		if(a[i]==last)c++;
		else if(c%2!=0){
			ans=last;
			break;
		} else c=1;
				
		last=a[i];
	}
	
	if(c%2!=0) ans=last;
	cout << ans << "\n";

	return 0;
}
