#include <iostream>
#include <vector>
#define ll long long 

using namespace std;


int Replace(ll n ,vector<ll> numbers){

  for(int i=0;i<n;i++){
    ll num;
    cin>>num;
    numbers.push_back(num);
  }

  ll min=numbers.at(0),max=numbers.at(0);

  for(int i=0;i<n;i++){
    if(numbers.at(i)<min){
      min=numbers.at(i);
    }
    if(numbers.at(i)>max){
      max=numbers.at(i);
    }
  }


  for(int k=0;k<n;k++){
    if(numbers.at(k)==min){
      numbers.at(k)=max;
    }
    else if(numbers.at(k)==max){
      numbers.at(k)=min;
    }
  }

  for(int l=0;l<n;l++){
    cout<<numbers.at(l)<<" ";
  }

  return numbers[n];

}





int main(){
  ll n;
  cin>>n;
  vector<ll>numbers;
  Replace(n,numbers);
  
  return 0;
}