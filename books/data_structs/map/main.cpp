#include <bits/stdc++.h>

#define debug(x) cout<<x<<"\n"
#define debug2(x,y) cout<<x<<" "<<y<<"\n"

using namespace std;

/*
 * IF A VALUE THAT DIDNT EXIST IS REQUESTED, THE MAP STRUCTURE CREATES IT AND ADDS A DEFAULT VALUE
 * */


int main(){
  map<string, int> m;
  m["monkey"]= 4;
  m["banana"] = 3;
  m["test"] = 9;

  debug(m["banana"]);

  if(m.count("ayabtu")){
    debug("This key exists!");
  }

  for(auto x : m){
    debug2(x.first, x.second);
  }

  return 0;
}
