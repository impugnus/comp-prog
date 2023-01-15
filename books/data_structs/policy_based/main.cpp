#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

#define debug(x) cout<<x<<"\n"

using namespace std;
using namespace __gnu_pbds;

typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main(){
  indexed_set s;

  s.insert(2);
  s.insert(3);
  s.insert(7);
  s.insert(9);
  s.insert(11);
  
  // Get element at x index
  auto x = s.find_by_order(2);
  debug(*x);

  // Get position of x element
  debug(s.order_of_key(7));

  // If the element does not appear in the set, we get the position that the element would have in the set
  debug(s.order_of_key(6));
  debug(s.order_of_key(8));

  return 0;
}
