#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<ll> tree;
int INF = numeric_limits<int>::max();

ll get_min(int node, int node_low, int node_high, int query_low, int query_high){
  if(node_low >= query_low && node_high <= query_high) return tree[node];

  if(node_low > query_high || node_high < query_low) return INF;

  int last_in_left = (node_low+node_high)/2;
  return min(get_min(2*node, node_low, last_in_left, query_low, query_high), get_min(2*node+1, last_in_left+1, node_high, query_low, query_high));
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
    tree[i] = min(tree[2*i], tree[2*i+1]);
  }

  for(int i = 0; i < q; i++){
    int x, y;
    cin >> x >> y;
    x--;y--;
    cout << get_min(1, 0, n-1, x, y) << "\n";
  }
}
