#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void solve(){
	int n = 0;
	cin >> n;
		
	while(n % 2020 != 0){
		if(n % 2021 == 0){
			cy; return;
		}
			
		n-=2021;
		if(n < 2020){
			cn; return;
		}
	}
		
	cy;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0;
	cin >> l;
	
	while(l--) solve();

	return 0;
}
