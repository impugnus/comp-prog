#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

char getRevBracket(char c){
	if(c=='}') return '{';
	else if(c==']') return '[';
	return '(';
}

bool isLeftBracket(char c){
	return(c=='(' || c=='[' || c=='{');
}

char ps(stack<char> *s){
	char val = s->top();
	s->pop();
	return val;
}

void solve(){
	string s; cin >> s;	
	stack<char> st;
	
	bool ok = true;
	for(int i =0; i < (int)s.size(); i++){
		char rev = getRevBracket(s[i]);
		if(isLeftBracket(s[i])) st.push(s[i]);
		else if(st.empty() || ps(&st)!=rev) {
			ok=false;
			break;
		}
	}
	
	if(!st.empty())ok=false;
	cout << (ok ? "S\n" : "N\n");
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) solve();

	return 0;
}
