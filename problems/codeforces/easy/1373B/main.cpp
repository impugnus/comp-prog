#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define cy cout<<"DA"<<endl
#define cn cout<<"NET"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int l = 0;
	cin >> l;
	
	rep(i, 0, l){
		int turn = 0;
		
		string s;
		cin >> s;
		
		int c1, c2;
		c1 = 0;
		c2 = 1;
		
		while(c2 < (int)s.size()){
			int f = (int)(s[c1] - 48);
			int sec = (int)(s[c2] - 48);
			
			if((f & !sec) or (sec & !f)){
				s.erase(c1, 2);
				if(c1 > 0){
					c1-=1;
					c2-=1;
				}
				
				turn = !turn;
			} else {
				c1++; c2++;
			}
		}
		
		if(turn) cy;
		else cn; 
	}

	return 0;
}
