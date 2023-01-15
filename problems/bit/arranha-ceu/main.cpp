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

#define MAXN 10010

using namespace std;

int bit_arr[MAXN], m[MAXN];
int N, Q;

void updt(int idx, int v){
	while(idx <= N){
		bit_arr[idx]+=v;
		idx += idx & -idx;
	}
}

int sum(int idx){
	int r = 0;
	
	while(idx > 0){
		r+=bit_arr[idx];
		idx -= idx & -idx;
	}
	
	return r;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	bit_arr[0] = 0;
	
	cin >> N >> Q;
	
	REP(i, 1, N){
		cin >> m[i];
		updt(i, m[i]);
	}
	
	while(Q--){
		int x, k;
		cin >> x >> k;
		
		if(!x){
			int p = 0;
			cin >> p;
			
			int d = p - m[k];
			m[k] = p;
			
			
			updt(k, d);
		} else {
			debug(sum(k));
		}
	}

	return 0;
}
