#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n"

using namespace std;

int main(){
  queue<int> q;
  q.push(3);
  q.push(2);
  q.push(5);
  debug(q.front());
  q.pop();
  debug(q.front());

  return 0;
}
