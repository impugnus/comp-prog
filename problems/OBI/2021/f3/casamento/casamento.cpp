#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"
#define pb push_back
#define ll long long

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string a,b; cin >> a >> b;
	if(a.size()<b.size()) swap(a,b);
	
	int len = (int)a.size();
	int d = len-(int)b.size();
	while(d--) b='0'+b;
	
	string n1,n2;
	for(int i = len-1; i >= 0; i--){
		int c1,c2;
		c1=a[i]-'0';
		c2=b[i]-'0';
		
		if(c1>c2)n1+=c1+'0';
		else if(c1<c2)n2+=c2+'0';
		else n1+=c1+'0',n2+=c2+'0';
	}
	
	int ans1 = 0,ans2 = 0;
	if(n1.size()>0) reverse(n1.begin(), n1.end()), ans1=stoi(n1);
	
	if(n2.size()>0) reverse(n2.begin(), n2.end()), ans2=stoi(n2);
	
	cout << min(ans1, ans2) << " " << max(ans1, ans2) << "\n";
	
	
	return 0;
}
