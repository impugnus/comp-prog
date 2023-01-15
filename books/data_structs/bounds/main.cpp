#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n"

using namespace std;

/*
 * lower_bound(x) - returns an iterator to the smallest element in the set whose value ist at least x
 *
 * upper_bound(x) - returns an iterator to the smallest element in the set whose value is larger than x
 * */

int main(){
  set<int> s = {2,4,6,8,10};

  int x = 5;

  auto it = s.lower_bound(x);
  if(it == s.begin()){
    debug(*it);
  } else if(it == s.end()){
    it--;
    debug(*it);
  } else{
    int a = *it; it--;
    int b = *it;
    if(x-b < a-x) debug(b);
    else debug(a);
  }

  return 0;
}
