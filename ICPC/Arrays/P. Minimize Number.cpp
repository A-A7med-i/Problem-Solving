#include <iostream>
#include <vector>
#define ll long long 

using namespace std;

void minNum(ll n , vector<ll>numbers){
  for(int i = 0; i < n; i++){
    ll num;cin>>num;
    numbers.push_back(num);
  }

  ll op=0;
  bool all_even=true;

  while(all_even){
    for(int j = 0; j < n; j++){
      if(numbers.at(j)%2 != 0){
        all_even=false;
        break;
      }
    }

    if(all_even){
      for(int k = 0; k < n; k++){
        numbers.at(k)/=2;
      }
      ++op;
    }
  }

  cout<<op;
}



int main(){
  ll n;cin>>n;

  vector<ll>numbers;

  minNum(n,numbers);
  return 0;
}