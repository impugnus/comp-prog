#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define REP(i,a,n)      for(int i = a ; i <= n ; i++)
#define rev(i,n,a)      for(int i = n ; i > a  ; i--)
#define REV(i,n,a)      for(int i = n ; i >= a ; i--)
#define cy cout<<"YES"<<endl
#define cn cout<<"NO"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char c;
	cin >> c;
	
	string s;
	cin >> s;
	
	string msg = "";
	
	int idx = 0;
	
	string char_list = "qwertyuiopasdfghjkl;zxcvbnm,./";
	
	if(c == 'R'){
		rep(i, 0, (int)s.size()){
			idx = char_list.find(s[i]);
			msg+=char_list[idx-1];
		}
	} else {
		rep(i, 0, (int)s.size()){
			idx = char_list.find(s[i]);
			msg+=char_list[idx+1];
		}
	}
	
	debug(msg);

	return 0;
}
