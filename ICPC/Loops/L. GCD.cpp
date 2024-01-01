#include <iostream>
using namespace std;

int main(){
  long long a,b,max_num,gcd;cin>>a>>b;

  max_num=max(a,b);

  for(int i=1;i<=max_num;i++){
    if(a%i==0&&b%i==0){
      gcd=i;
    }
  }

  cout<<gcd;
  
  return 0;
}