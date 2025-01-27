#include <iostream>
using namespace std;

bool isprime(long long n){
  if(n<1){
    return false;
  }
  for(int i=2;i<=n/2;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}

int main(){
  long long n;
  cin>>n;
  if(isprime(n)){
    cout<<"YES";
  }
  else {cout<<"NO";}

}