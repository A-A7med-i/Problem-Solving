#include <iostream>
using namespace std;


int main(){
  int n;
  cin>>n;
  int a=0;
  int b=1;
  if(n==1){
    cout<<a<<" ";
  }
  else if(n==2){
    cout<<a<<" "<<b;
  }
  else{
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;++i){
      int res=a+b;
      cout<<res<<" ";
      a=b;
      b=res;
    }
  }
  return 0;
}
