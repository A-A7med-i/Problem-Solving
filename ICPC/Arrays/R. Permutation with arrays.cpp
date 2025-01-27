#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

void Permutation(ll n, vector <ll> numbers_1, vector <ll> numbers_2){

  for(int i = 0; i < n; i++){
    ll num;cin>>num;

    numbers_1.push_back(num);

  }

  for(int i = 0; i < n; i++){
    ll num;cin>>num; 

    numbers_2.push_back(num);

  } 


  sort(numbers_1.begin(), numbers_1.end());

  sort(numbers_2.begin(), numbers_2.end());


  cout<<(numbers_1 == numbers_2 ? "yes" : "no");


}


int main(){
  ll  n;cin>>n;

  vector <ll> numbers_1,numbers_2;

  Permutation(n,numbers_1,numbers_2);

  return 0;

}