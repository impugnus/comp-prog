#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int abs(int h){
	return floor(h/2+10);
}

int ls(int h){
	return h-10;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int lines = 0;
	cin >> lines;
	
	rep(i, 0, lines){
		int x,n,m;
		cin >> x >> n >> m;
		
		if(x/2+10 < x){
			while(n > 0 && x > 0){
				x = abs(x);
				n--;
			}
			
			if(x <= 0) cy;
			else{
				while(m > 0 && x > 0){
					x = ls(x);
					m--;
				}
				
				if(x <= 0) cy;
				else cn;
			}
		} else {
			while(m > 0 && x > 0){
					x = ls(x);
					m--;
				}
				
			if(x <= 0) cy;
			else {
				while(n > 0 && x > 0){
					x = abs(x);
					n--;
				}
				
				if(x <= 0) cy;
				else cn;
			}
		}
	}

	return 0;
}
