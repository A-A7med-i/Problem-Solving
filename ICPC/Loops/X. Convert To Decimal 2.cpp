#include <iostream>
#include <cmath>
#define ll long long 

using namespace std;
 
int main(){
  ll t,ones;
  cin>>t;
  for(int i=1;i<=t;i++){
    ll n;
    ones=0;
    cin>>n;
    while(n>0){
      if(n%2!=0){
        ones+=1;
      }
      n/=2;
      if(n==1){
        ones+=1;
        break;
      }
    }
    ll decimal=0;
    ll power=0;
    while (ones>0)
    {
      decimal+=pow(2,power);
      power++;
      ones--;
    }
    cout<<decimal<<"\n";
  }
  return 0;
}