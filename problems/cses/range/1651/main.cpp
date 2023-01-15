#include <bits/stdc++.h>

using namespace std;

vector<long long> tree;
int N, Q;

long long f(int node, int node_low, int node_high, int query_low, int query_high, int v){
  if(node_low >= query_low && node_high <= query_high){
    if(v != -1) tree[node]+=v;
    return tree[node];
  }
  
  if(query_low > node_high || query_high < node_low) return 0;

  int last_in_left = (node_low+node_high)/2;
  long long sum = f(2*node, node_low, last_in_left, query_low, query_high, v) + f(2*node+1, last_in_left+1, node_high, query_low, query_high, v);

  return tree[node] + sum;
}

int main(void){
  cin >> N >> Q;

  vector<int> a(N);
  for(int i = 0; i < N; i++) cin>>a[i];

  while(__builtin_popcount(N) != 1){
    a.push_back(0);
    N++;
  }

  tree.resize(2*N);

  for(int i = 0; i < N; i++) tree[N+i] = a[i];

  while(Q--){
    int op = 0;
    cin >> op;

    if(op == 1){
      int x, y, v;
      cin >> x >> y >> v;
      x--;y--;
      f(1, 0, N-1, x, y, v);
    } else {
      int p = 0;
      cin >> p;
      p--;

      cout << f(1, 0, N-1, p, p, -1) << "\n";
    }
  }

  return 0;
}
