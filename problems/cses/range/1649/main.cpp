#include <bits/stdc++.h>

using namespace std;

int N, Q;
int INF = numeric_limits<int>::max();
vector<int> tree;

int get_min(int node, int node_low, int node_high, int query_low, int query_high){
  if(node_low >= query_low && node_high <= query_high){
    return tree[node];
  }

  if(node_low > query_high || node_high < query_low) return INF;

  int last_in_left = (node_low+node_high)/2;

  return min(get_min(2*node, node_low, last_in_left, query_low, query_high), get_min(2*node+1, last_in_left+1, node_high, query_low, query_high));
}

void update(int idx, int v){
  tree[N+idx] = v;

  for(int j = (N+idx)/2; j >=1; j/=2){
    tree[j] = min(tree[2*j], tree[2*j+1]);
  }
}

int main(void){
  cin >> N >> Q;

  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];

  while(__builtin_popcount(N) != 1) {
    a.push_back(INF);
    N++;
  }
  tree.resize(2*N);

  for(int i = 0; i < N; i++) tree[N+i] = a[i];

  for(int i = N-1; i >= 1; i--) tree[i] = min(tree[2*i], tree[2*i+1]);

  while(Q--){
    int op = 0;
    cin >> op;

    if(op == 1){
      int k, u;
      cin >> k >> u;
      k--;
      update(k, u);
    } else {
      int a, b;
      cin >> a >> b;
      a--; b--;
      cout << get_min(1, 0, N-1, a, b) << "\n";
    }
  }


  return 0;
}
