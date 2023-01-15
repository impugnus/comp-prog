#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<ll> tree;

ll f(int node, int node_low, int node_high, int query_low, int query_high){
  if(node_low >= query_low && node_high <= query_high) return tree[node];

  if(node_low > query_high || node_high < query_low) return 0;

  int last_in_left = (node_low+node_high)/2;
  return f(2*node, node_low, last_in_left, query_low, query_high)+f(2*node+1, last_in_left+1, node_high, query_low, query_high);
}

int main(){
  int n, q;

  cin >> n >> q;

  vector<int> a(n);

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  while(__builtin_popcount(n) != 1) {
    a.push_back(0);
    n++;
  }

  tree.resize(2*n);
  
  for(int i = 0; i < n; i++){
    tree[n+i] = a[i];
  }

  for(int i = n -1; i >= 1; i--){
    tree[i] = tree[2*i] + tree[2*i+1];
  }

  for(int i = 0; i < q; i++){
    int l, h;
    cin >> l >> h;
    l--; h--;
    cout << f(1, 0, n-1, l, h) << "\n";
  }

}
