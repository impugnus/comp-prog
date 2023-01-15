#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	string t;
	cin >> t;
	
	int c =  0;
	size_t pos = t.find('8');
	while(pos != string::npos){
		c++;
		pos = t.find('8', pos + 1);
	}
	
	int ans = 0;
	if(c >= n/11) ans = n/11;
	else if(c < n/11 && n > 11) ans=c;
	else ans=0; 
	
	cout << ans << "\n";
	

	return 0;
}
