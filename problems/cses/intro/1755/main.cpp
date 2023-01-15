#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int idx[27]={0};
	string s; cin >> s;
	int len = (int)s.size();
	for(int i = 0; i < len; i++) idx[s[i]-'A']++;
	
	bool ok = true, f = false;
	for(int i = 0; i < 27; i++){
		if(idx[i]%2==1){
			if(len%2==1 && !f) f=true;
			else{
				ok=false;
				break;
			}
		}
	}
	
	string fh, sh, af;
	if(ok){
		for(int i = 0; i < 27; i++){
			if(idx[i]%2==0){
				for(int j = 0; j < idx[i]/2; j++) fh+=(i+'A');
			} else {
				for(int j = 0; j < idx[i]; j++) af+=(i+'A');
			}
		}
		sh=fh;
		reverse(sh.begin(), sh.end());
		cout << fh+af+sh << "\n";
	} else cout << "NO SOLUTION\n";
	

	return 0;
}
