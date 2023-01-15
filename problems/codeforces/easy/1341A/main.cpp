#include <bits/stdc++.h>

#define rep(i,a,n)      for(int i = a ; i < n ; i++)
#define cy cout<<"Yes"<<endl
#define cn cout<<"No"<<endl
#define ln cout<<"\n";
#define debug(x) cout<<(x)<<"\n"
#define ll long long

using namespace std;
 
int main()
{
    int t; 
	cin>>t;
    while(t--)
    {
        int n, a, b, c, d;
		cin >> n >> a >> b >> c >> d;
        long long g1 = a + b, g2 = a - b, k1 = c+ d, k2 = c - d;
        if (n * g1 < k2 || n * g2 > k1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
	}
}
