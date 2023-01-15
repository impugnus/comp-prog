#include <bits/stdc++.h>

#define ll long long
#define pb push_back

using namespace std;

int main(void){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	stack<int> st;
	
	int l; cin >> l;
	for(int i = 0; i < l; i++){
		int v; cin >> v;
		st.push(v);
	}
	
	int soma = 0, to_del = 0;
	while(!st.empty()){
		int curr = st.top();
		st.pop();
		
		if(curr==0) to_del++;
		else if(to_del>0){
			to_del--; continue;
		} else soma+=curr;
	}
	
	cout << soma << "\n";
	
	return 0;
}
