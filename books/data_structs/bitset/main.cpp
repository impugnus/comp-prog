#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n";

using namespace std;

int main(){
  bitset<10> s;
  s[1] = 1;
  s[3] = 1;
  s[4] = 1;
  s[7] = 1;

  debug(s[4]);
  debug(s[5]);

  bitset<10> s2(string("0010011010"));
  debug(s2[4]);
  debug(s2[5]);

  debug(s2.count());

  return 0;
}
