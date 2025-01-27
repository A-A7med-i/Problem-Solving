#include <iostream>
using namespace std;


int main(){
  long long t;
  cin>>t;
  while(t--){
    string num;
    cin>>num;
    for(int i=num.size()-1;i>=0;--i){
      cout<<num[i]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}