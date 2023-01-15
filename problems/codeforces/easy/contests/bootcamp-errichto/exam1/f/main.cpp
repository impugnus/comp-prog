#include <bits/stdc++.h>
    
#define debug(x) cout<<(x)<<"\n"
#define ll long long
    
using namespace std;
    
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, k;
    cin >> n >> k;
    string t;
    cin >> t;
    
    ll l[27]={0};
    
    for(ll i = 0; i < n; i++)l[t[i]-64]++;
    
    sort(l, l+27, greater<int>());
    
    ll coins = 0;
    for(ll i = 0; i < 27 && k > 1; i++){
        if(l[i]>1){
			if(l[i] > k) l[i]=k;
            coins+=(l[i]*l[i]);
            k-=l[i];
        }
        
    }
    
    while(k>0){k--;coins++;}
    
    cout << coins << "\n";
    
    
    return 0;
}
