#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;

void f(vector<int>&divs, int n){
	divs.push_back(4); divs.push_back(7);
	const auto limit4 = (numeric_limits<int>::max()-4)/10;
	int x;
	
	for(size_t i = 0; (x=divs[i]) <= n; i++){
		divs.push_back(x*10+4);
		divs.push_back(x*10+7);
	}
	
	if(x <= limit4) divs.push_back(x*10+4);
}

vector<int>divs;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n = 0;
	cin >> n;
	
	int c = 0;
	int temp = n;
	bool l = true;
	while(temp != 0){
		if(temp%10==4 || temp%10==7) c++;
		else {l=false; break;}
		temp/=10;
	}
	
	if(c == 4 || c == 7 || l) cout << "YES\n";
	else{
		f(divs, n);
		for(int i =0; i < (int)divs.size(); i++) {
			if(n%divs[i]==0){ cout << "YES\n"; return 0;}
		}
		cout << "NO\n";
	}

	return 0;
}
