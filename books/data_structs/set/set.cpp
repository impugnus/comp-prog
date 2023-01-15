#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n"

using namespace std;


/*
 *  SET - BASED ON A BALANCED BINARY TREE
 *  UNORDERED_SET - USES HASHING
 *
 *  A SET NEVER ADDS A NEW ELEMENT
 *  BUT MULTISET/UNORDERED_MULTISET CAN CONTAIN MORE THAN ONE REPEATED ELEMENT 
 * */

int main(){
  set<int> s;
  s.insert(3);
  s.insert(2);
  s.insert(5);

  debug(s.count(3));
  debug(s.count(4));;
  s.erase(3);
  s.insert(4);

  debug(s.count(3));
  debug(s.count(4));

  debug("----------------------------------------");

  set<int> s2 = {2,5,6,8};
  debug(s2.size());

  for(auto x : s2){
    debug(x);
  }
  
  debug("----------------------------------------");
  
  multiset<int> s3;
  s3.insert(5);
  s3.insert(5);
  s3.insert(5);
  debug(s3.count(5));
  
  s3.erase(5);
  debug(s3.count(5));

  // s.erase(s.find(5)) - removes just one element, not all of them
  debug("----------------------------------------");

  //set<int>::iterator it = s.begin();
  auto it = s.begin();
  debug(*it);
  debug("----------------------------------------");

  for(auto i = s.begin(); i != s.end(); i++){
    debug(*it);
  }

  auto last = s.end(); last--;
  debug(*last);

  /*
  auto f = s.find("2");
  if(f == s.end()){
    // it was not found
  }
  */

  return 0;
}
