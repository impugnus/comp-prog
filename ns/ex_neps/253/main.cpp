#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

struct pont{
	int idx,o,p,b;
};

bool comp(pont &s1, pont &s2){
	if(s1.o==s2.o){
		if(s1.p==s2.p){
			if(s1.b==s2.b){
				return  (s1.idx<s2.idx);
			} else return (s1.b>s2.b);
		} else return (s1.p>s2.p);
	} else return (s1.o>s2.o);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
	vector<pont> c(n);
	
	for(int i= 0; i< n; i++) c[i].idx=i+1;
	
	while(m--){
		int x,y,z; cin >> x >> y >> z; x--,y--,z--;
		c[x].o++, c[y].p++, c[z].b++;
	}
	
	sort(c.begin(), c.end(), comp);
	for(auto e : c) cout << e.idx << " ";
	cout << "\n";
	

	return 0;
}
