#include <bits/stdc++.h>

#define pb push_back

#define MAXN 1001

using namespace std;

bool mark[MAXN];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	// amigos, reunioes, amigo_inf, prim_reuniao
	int n,m,inf,r; cin >> n >> m >> inf >> r;
	int a=0,b=0, ans = 1;
	
	mark[inf]=1;
	
	for(int i = 1; i < r; i++){
		cin >> a;
		while(a--) cin >> b;
	}
	
	for(int i = r; i <= m; i++){
		cin >> a;
		vector<int> v;
		for(int j = 0; j < a; j++){
			cin >> b;
			v.pb(b);
		}
		
		bool had_inf = false;
		for(int j = 0; j < a; j++) {
			if(mark[v[j]]==1){
				had_inf=true;
				break;
			}
		}
		
		if(had_inf){
			for(int j = 0; j < a; j++){
				if(mark[v[j]]!=1){
					mark[v[j]]=1;
					ans++;
				}
			}
		}
	}
	
	cout << ans << "\n";
	
	return 0;
}
