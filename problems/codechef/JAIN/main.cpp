#include <bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

void test_case(){
	int l; cin >> l;
	string st;

	ll freq[32]={0};
	while(l--){
		cin >> st;
		int mask = 0;
		for(char ch : st){
			if(ch=='a') mask|=(1<<0);
			else if(ch=='e') mask|=(1<<1);
			else if(ch=='i') mask|=(1<<2);
			else if(ch=='o') mask|=(1<<3);
			else if(ch=='u') mask|=(1<<4);
		}
		freq[mask]++;
	}
	
	ll ans = 0;
	for(int i = 0; i < 32; i++){
		for(int j = i+1; j < 32; j++){
			if((i|j)==31) ans+=(freq[i]*freq[j]);
		}
	}
	
	ans+=(freq[31]*(freq[31]-1)/2);
	cout << ans << "\n";
	
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int T; cin >> T;
	while(T--) test_case();

	return 0;
}
