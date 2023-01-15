#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s[]={1,5,10,25,50,100};
	
	int n; cin >> n;
	int cnt = 0;
	
	for(int i = 5; i >= 0; i--){
		while(n>=s[i]){
			cnt++;
			n-=s[i];
		}
	}
	
	cout << cnt << "\n";

	return 0;
}
