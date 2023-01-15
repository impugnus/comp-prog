#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	// min flips to make a or b == c
	int a,b,c; cin >> a >> b  >> c;
	
	int cnt = 0;
	
	for(int i = 0; i < 32; i++){
		bool x,y,z; x=y=z=false;
		
		if(a&(1<<i)) x=true;
		if(b&(1<<i)) y=true;
		if(c&(1<<i)) z=true;
		
		if(z==false){
			if(x && y) cnt+=2;
			else if(x || y) cnt++;
		} else if(!x && !y)cnt++;
	}
	
	cout << cnt << "\n";

	return 0;
}
