#include <bits/stdc++.h>

#define ll long long
#define pb push_back

#define MAXN 105

using namespace std;

vector<int> r(MAXN);
vector<int> ans(MAXN);
int timer, n;
char c;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	timer=ne=0;
	int l; cin >> l;
	for(int i = 0; i < l; i++){
		cin >> c >> n;
		
		if(c=='R'){
			r[n]=timer;
		} else if(c=='E'){
			ans[n]+=(timer-r[n]);
			r[n]=0;
		} else{
			timer+=n-1;
			continue;
		}
		
		timer++;
	}
	
	
	for(int i = 0; i < 101; i++){
		if(ans[i]!=0){
			if(r[i]!=0) cout << i << " -1\n"; 
			else cout << i << " " << ans[i] << "\n";
		}
	}
	
	return 0;
}
