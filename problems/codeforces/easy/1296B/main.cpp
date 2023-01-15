#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0;
	cin >> l;
	
	int a[l];
	
	rep(i, 0, l){
		cin >> a[i];
	}
		
	rep(i, 0, l){
		int total = 0;
		int x = a[i];
		while(x>0){
			int n1 = (floor(x / 10)) * 10;
			total+=n1;
				
			x = x - n1;
			int cashback = floor(n1/10);
				
			x+=cashback;
			
			if(x < 10){
				total+=x;
				break;
			}
		}
		
		
		debug(total);
	}

	return 0;
}
