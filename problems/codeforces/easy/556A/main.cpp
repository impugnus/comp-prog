#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define debug2(x, y) cout<<(x)<<" "<<(y)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int size = 0;
	cin >> size;
	
	string s;
	cin >> s;
	
	int c1, c2;
	c1 = 0;
	c2 = 1;
	
	while(c2 < size){
		int f = (int)s[c1] - 48;
		int sec = ((int)s[c2] - 48);
		
		if((f & !sec) or (sec & !f)){
			s.erase(c1, 2);
			size = (int)s.size();
			
			if(c1 > 0){
				c1-=1;
				c2-=1;
			}
		} else {
			c1++; c2++;
		}
		
	}
	
	debug(s.size());
	
	return 0;
}
