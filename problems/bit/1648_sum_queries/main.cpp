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

#define MAXN 100100

int bit[MAXN], numbers[MAXN];

int N, Q;

void updt(int idx, int v){
	while(idx <= N){
		bit[idx]+=v;
		idx+= idx & -idx;
	}
}

int sum(int start, int end){
	int r = 0;
	
	while(end > start){
		r+=bit[end];
		end -= end & -end;
	}
	
	return r;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> Q;
	
	REP(i, 1, N){
		cin >> numbers[i];
		updt(i, numbers[i]);
	}
	
	while(Q--){
		int op = 0;
		cin >> op;
		
		if(op == 1){
			int k, u;
			cin >> k >> u;
			
			int d = u - numbers[k];
			
			updt(k, d);
		} else {
			int a, b;
			cin >> a >> b;
			debug(sum(a, b));
		}
	}

	return 0;
}
