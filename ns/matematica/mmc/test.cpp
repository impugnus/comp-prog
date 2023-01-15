#include <iostream>
using namespace std;

// mmc(a,b) = (a*b)/mdc(a,b)

int gcd(int a, int b){
  if(a==0) return b;
  return gcd(b%a, a);
}

int lcm(int a, int b){
  int ans = a*b;
  ans/=gcd(a,b);
  return ans;
}

int main(){
  int a,b; cin >> a >> b;
  cout << "MMC de " << a << " e " << b << ": " << lcm(a,b) << endl;
  return 0;
}
