#include <iostream>
using namespace std;


int main(){
  long long t;
  cin>>t;
  for(int i=0;i<t;i++){
    long long x,y,max_num,min_num,res=0;
    cin>>x>>y;
    max_num=max(x,y);
    min_num=min(x,y);
    for(int j=min_num+1;j<max_num;j++){
      if(j%2!=0){
        res+=j;
      }
    }
    cout<<res<<"\n";
  }
  return 0;
}