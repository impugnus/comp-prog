#include <bits/stdc++.h>

#define debug(x) cout<<(x)<<"\n"

using namespace std;

int main(){
  string a = "hatti";
  string b = a+a;

  debug(b);

  b[5] = 'v';
  debug(b);

  string c = b.substr(3, 4);
  debug(c);

  return 0;
}
