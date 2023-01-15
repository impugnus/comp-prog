#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int l;
vector<int> pilha1, pilha2;

void test_case(){
	pilha1.clear();
	pilha2.clear();
	
	vector<int> ar(l);
	for(int i = 0; i < l; i++) cin >> ar[i];
	
	for(int i = 0; i < l/2+1; i++){
		vector<int>::iterator it = lower_bound(pilha1.begin(), pilha1.end(), ar[i]);
		if(it==pilha1.end()) pilha1.pb(ar[i]);
		else *it=ar[i];
	}
	
	for(int i = l-1; i >= l/2+1; i--){
		vector<int>::iterator it = lower_bound(pilha2.begin(), pilha2.end(), ar[i]);
		if(it==pilha2.end()) pilha2.pb(ar[i]);
		else *it = ar[i];
	}
	
	cout << pilha1.size()+pilha2.size() << endl;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	while(cin >> l) test_case();

	return 0;
}
