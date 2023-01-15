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

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, total;
	cin >> n >> m;
	
	int a[n];
	total = 0;
	
	rep(i, 0, n){
		cin >> a[i];
	}
	
	sort(a, a + n);
	
	rep(i, 0, m){
		if(a[i] < 0) total+=(-a[i]);
	}
	
	debug(total);

	return 0;
}
