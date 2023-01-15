#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int l = 0; cin >> l;
	
	vector<float> res;
	
	for(int i = 0; i < l; i++){
		float sum = 0;
		for(int j = 0; j < 4; j++){
			float x = 0; cin >> x;
			sum+=x;
		}
		res.push_back(sum/4);
	}
	
	float n = res[0];
	int pos = 1;
	for(int i = 0; i < l; i++){
		if(res[i]>n)pos++;
	}
	
	cout << pos << "\n";
	
	return 0;
}
