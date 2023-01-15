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
	
	int lines = 0;
	cin >> lines;
	
	string chars = "abcdefghijklmnopqrstuvwxyz";
	
	rep(i, 0, lines){
		int n, a, b;
		cin >> n >> a >> b;
		
		string diff_chars = chars.substr(0, n);
		string result = "";
		
		rep(j, 0, b){
			result+=diff_chars[j];
		}
		
		int diff_len = n - (int)result.size();
		if(diff_len > 0){
			rep(x, 0, diff_len){
				result+=result[x];
			}
		}
		
		debug(result);
	}

	return 0;
}
