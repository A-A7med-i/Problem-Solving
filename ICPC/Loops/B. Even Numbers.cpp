#include <iostream>
using namespace std;

int main(){
  long long n,even;
  cin>>n;
  bool founded =false;
  for(int i=1;i<=n;i++){
    even=i%2;
    if(even==0){
      cout<<i<<"\n";
      founded=true;
    }
  }
  if(!founded){
    cout<<-1<<"\n";
  }
}