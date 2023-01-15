#include <bits/stdc++.h>
using namespace std;

char getRevBracket(char s){
	if(int(s) > 42) return (char)(int(s)-2);
	else return (char)(int(s)-1);
}

int isLeftBracket(char s){
		int v = int(s);
		if(v == 40 or v == 91 or v == 123) return 1;
		
		return 0;
}

char pop_and_store(stack<char> *s){
	char v = s->top();
	s->pop();
	return v;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	
	string s;
	cin >> s;
	
	int isValid = 0;
	
	stack<char> stack;
	
	for(unsigned int i = 0; i < s.length(); i++){
		char rev = getRevBracket(s[i]);
		
		if(isLeftBracket(s[i])){
			stack.push(s[i]);
		} else if(pop_and_store(&stack) != rev or !stack.empty()){
			isValid = 0;
		}
	}
	
	(stack.empty()) ? isValid = 1 : isValid = 0;
	
	if(isValid) cout << "VALIDO\n";
	else cout << "INVALIDO\n";

	return 0;
}
