#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string t, arr;
	cin >> t;
	
	int s = 0;
	
	if(t[0]=='l'){ cin >> t; s=8;}
	cin >> arr;
	if(s==0){
		if(t[0]=='c')s=1;
		else s=4;
	}
	
	string n = arr.substr(arr.find("[")+1);
	n.pop_back(); n.pop_back();
	cout << stoi(n)*s << "\n";

	return 0;
}
