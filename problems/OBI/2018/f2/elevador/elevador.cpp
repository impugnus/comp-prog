#include <bits/stdc++.h>
using namespace std;


int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int l; cin >> l;
  vector<int> p(l+1);

  for(int i = 1; i <= l; i++) cin >> p[i];
  p[0]=0;
  
  sort(p.begin(), p.end());
  
  bool ok =true;
  for(int i = 0; i < l; i++){
	if(p[i+1]-p[i]>8){
		ok=false;
		break;
	}
  }
  
  cout << (ok ? "S\n" : "N\n");
  
  return 0;
}
