#include <bits/stdc++.h>

#define rep(i,a,n) for(unsigned int i = a; i < n; i++)
#define nl cout<<"\n";

using namespace std;

int isWUB(string s, int pos){
	if(s[pos+1] == 'U' && s[pos+2] == 'B') return 1;
	else return 0;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	cin >> s;
	string new_string(s.size()+1, '\0');
	
	int count = 0;
	
	rep(i, 0, s.size()){
		if(s[i] == 'W'){
			if(isWUB(s, i)){
				if(count > 0 && new_string[count-1] != ' '){
					new_string[count] = ' ';
					count++;
				}
				i+=2;
				
				continue;
			} else{
				new_string[count] = s[i];
				count++;
			}
		} else {
			new_string[count] = s[i];
			count++;
		}
	}
	
	printf("%s\n", new_string.c_str());
	
	return 0;
}
