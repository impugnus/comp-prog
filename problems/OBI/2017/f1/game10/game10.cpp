#include <bits/stdc++.h>

#define pb push_back;

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int n,d,a; cin >> n >> d >> a;
	
	
	int ans = 0;
	if(a==d) ans=0;
	else if(a<d) ans=d-a;
	else ans=(n-a)+d;
	
	cout << ans << "\n";
	
	return 0;
}
