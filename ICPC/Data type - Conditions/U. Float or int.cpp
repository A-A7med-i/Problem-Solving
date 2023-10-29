#include <iostream>
#include <cmath>
using namespace std;
int main(){
  long double n;
  cin>>n;
  if(floor(n)==n){cout<<"int "<<static_cast<int>(n);}
  else {cout<<"float "<<static_cast<int>(n)<<" "<<n-floor(n);}
}