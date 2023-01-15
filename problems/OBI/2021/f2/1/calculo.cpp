#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int s,a,b; cin >> s >> a >> b;
	
	int c = 0;
	for(int i = a; i <= b; i++){
		int t = i;
		int sum = 0;
		
		while(t>0){
			sum+=t%10;
			t/=10;
		}
		
		if(sum==s)c++;
	}
	
	cout << c << "\n";
	
	return 0;
}
