#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n"

using namespace std;

int main(){
  // priority_queue<int,vector<int>,greater<int>> q;

  priority_queue<int> q;
  q.push(3);
  q.push(5);
  q.push(7);
  q.push(2);
  debug(q.top());
  q.pop();
  debug(q.top());
  q.pop();
  debug(q.top());

  return 0;
}
