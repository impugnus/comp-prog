#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

vector<int> pilha;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	vector<int> ar = {1,2,4,3};
	
	for(int i = 0; i < (int)ar.size(); i++){
		vector<int>::iterator it = lower_bound(pilha.begin(), pilha.end(), ar[i]);
		if(it==pilha.end()) pilha.pb(ar[i]);
		else *it=ar[i];
	}
	
	cout << pilha.size() << "\n";
	
	return 0;
}
