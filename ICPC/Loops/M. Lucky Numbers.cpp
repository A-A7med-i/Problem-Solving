#include <iostream>
using namespace std;

bool islucky(long long num){
  while(num>0){
    long long digit=num%10;
    if(digit!=4&&digit!=7){
      return false;
    }
    num/=10;
  }
  return true;
}

int main(){
  long long a,b;
  cin>>a>>b;
  bool founded=false;
  for(int i=a;i<=b;i++){
    if(islucky(i)){
      cout<<i<<" ";
      founded=true;
    }
  }
  if(!founded){
    cout<<-1;
  }
}