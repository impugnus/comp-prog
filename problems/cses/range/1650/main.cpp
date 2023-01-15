#include <bits/stdc++.h>

using namespace std;

int N, Q;
vector<int> tree;

int get_sum(int node, int node_low, int node_high, int query_low, int query_high){
  if(node_low >= query_low && node_high <= query_high) return tree[node];

  if(query_low > node_high || query_high < node_low) return 0;

  int last_in_left = (node_low+node_high)/2;

  return (get_sum(2*node, node_low, last_in_left, query_low, query_high)^get_sum(2*node+1, last_in_left+1, node_high, query_low, query_high));
}

int main(void){
  cin >> N >> Q;

  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];
  
  while(__builtin_popcount(N) != 1) {
    a.push_back(0);
    N++;
  }
  tree.resize(2*N);

  for(int i = 0; i < N; i++) tree[N+i] = a[i];
  for(int i = N-1; i >= 1; i--) tree[i] = tree[2*i] ^ tree[2*i+1];

  while(Q--){
    int x, y;
    cin >> x >> y;
    x--; y--;
    cout << get_sum(1, 0, N-1, x, y) << "\n";
  }
}
