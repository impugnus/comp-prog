#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int k, n, t;

    cin >> t;
    while(t--) {
        cin >> n >> k;

        if(n < k) cout << k - n << "\n";
        else if(n % 2 == k % 2) cout << 0 << "\n";
        else cout << 1 << "\n";
    }

    return 0;
}
