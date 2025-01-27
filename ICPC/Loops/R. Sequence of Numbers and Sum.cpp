#include <iostream>
using namespace std;

int main(){
  int n,m;
  while(cin>>n>>m){
    if(n<=0||m<=0){
      break;
    }
    else {
      int sum=0;
      for(int i=min(n,m);i<=max(n,m);++i){
        cout<<i<<' ';
        sum+=i;
      }
      cout<<"sum ="<<sum<<"\n";
    }
  }
  return 0;
}