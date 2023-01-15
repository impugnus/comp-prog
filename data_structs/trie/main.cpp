#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

struct node{
	int ch[26];
	bool end;
};

const MAXN = 1e5+5;
node trie[MAXN];
int tt = 0;

void add(string s){
	int curr = 0;
	
	for(char c : s){
		if(trie[curr].ch[c - 'a'] == 0){
			trie[++tt].end=false;
			trie[curr].ch[c - 'a'] = tt;
		}
		curr = trie[curr].ch[c-'a'];
	}
	trie[cur].end=true;
}

bool exists(string s){
	int curr = 0;
	
	for(char c : s){
		if(trie[curr].ch[c - 'a'] == 0) return false;
		curr = trie[curr].ch[c-'a'];
	}
	
	return trie[curr].end;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	return 0;
}
