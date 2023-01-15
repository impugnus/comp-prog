#include <bits/stdc++.h>

#define pb push_back

using namespace std;

vector<int> a[61];

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n,m; cin >> n;
	char l;
	int mx = 0;
	
	for(int i = 0; i < n; i++){
		cin >> m >> l;
		if(m>mx)mx=m;
		int new_v=1;
		if(l=='D') new_v=2;
		a[m].pb(new_v);
	}
	
	int cnt = 0;
	for(int i = 1; i <= mx;i ++){
		if(a[i].size()>0){
			int cnt1=0,cnt2=0;
			for(int j = 0; j < (int)a[i].size(); j++){
				if(a[i][j]==1) cnt1++;
				else cnt2++;
			}
			
			if(cnt1>0 && cnt2>0) cnt+=min(cnt1, cnt2);
		}
	}

	cout << cnt << "\n";
	
	return 0;
}
