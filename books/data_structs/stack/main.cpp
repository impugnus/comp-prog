#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n"

using namespace std;

int main(){
  stack<int> s;
  s.push(3);
  s.push(2);
  s.push(5);
  debug(s.top());
  s.pop();
  debug(s.top());

  return 0;
}
