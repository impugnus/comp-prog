#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int da,db; cin >> da >> db;
	
	if(da==9 && db==1){
		cout << "9 10\n";
		return 0;
	}
	
	if(da==db) cout << da*10 << " " << db*10+1 << "\n";
	else if(db==da+1) cout << db*10-1 << " " << db*10 << "\n";
	else cout << "-1\n";
	
	return 0;
}
