#include <iostream>
#define ll long long 
using namespace std;

int main(){
  int n,a,b;
  cin>>n>>a>>b;
  ll sum=0;
  for(int i=1;i<=n;i++){
    if(i/10==0){
      if(i>=a&&i<=b){
        sum+=i;
      }
    }
    else {
      int num=i;
      int my_sum=0;
      while (num)
      {
        int digit=num%10;
        my_sum+=digit;
        num/=10;
      }
      if(my_sum>=a && my_sum<=b){
        sum+=i;
      }
    }
  }
  cout<<sum;
  return 0;
}