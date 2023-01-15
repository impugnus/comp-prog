#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

string s;
vector<string> v;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int l =0; cin >> l;
	
	bool found=false;
	
	while(l--){
		cin >> s;
		if(!found){
			size_t pos = s.find("OO");
			if(pos!=string::npos){
				s[pos]='+';
				s[pos+1]='+';
				found=true;
			}
		}
		v.push_back(s);
	}
	
	if(found){
		cout << "YES\n";
		for(auto i : v) cout << i << "\n";
	} else cout << "NO\n";

	return 0;
}
