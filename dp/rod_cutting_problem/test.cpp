#include <bits/stdc++.h>

#define pb push_back

using namespace std;

const int MAXN = 1e5+5;

int n;
int p[MAXN], dp[MAXN];

vector<int> choosen[MAXN];
// choosen[i][j] = j parts to form best i sum

int main(void){
    cin >> n;

    for(int i = 1; i <= n; i++) cin >> p[i];

    for(int i = 1; i <= n; i++){
        int profit = 0;

        for(int j = 1; j <= i; j++){
            if(p[j]+dp[i-j]>profit){
                profit=p[j]+dp[i-j];
                choosen[i].clear();
                choosen[i].pb(j);
                for(int z = 0; z < (int)choosen[i-j].size(); z++) choosen[i].pb(choosen[i-j][z]);
            }
        }

        dp[i]=profit;
    }

    cout << dp[n] << "\n";
    for(int e : choosen[n]) cout << e << " ";
    cout << "\n";

    return 0;
}
