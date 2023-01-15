#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	vector<pair<int, int>> check = {{1,3}, {2,3}, {2,5}, {5,4}};
	
	int n; cin >> n;
	int ans = 0;
	
	pair<int,int> curr={4,3};
	for(int i =0 ; i <n ; i++){
		int mv; cin >> mv;
		
		if(mv==1) curr.first++, curr.second+=2;
		else if(mv==2) curr.first+=2, curr.second++;
		else if(mv==3) curr.first+=2, curr.second--;
		else if(mv==4) curr.first++, curr.second-=2;
		else if(mv==5) curr.first--, curr.second-=2;
		else if(mv==6) curr.first-=2, curr.second--;
		else if(mv==7) curr.first-=2, curr.second++;
		else if(mv==8) curr.first--, curr.second+=2;
		
		ans++; 
		bool ok = true;
		for(int j = 0; j < 4; j++){
			if(curr==check[j]){
				ok=false;
				break;
			}
		}
		
		if(!ok) break;
		
	}
	
	cout << ans << "\n";

	return 0;
}
