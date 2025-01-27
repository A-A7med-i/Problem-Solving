#include <iostream>
#include <vector>
#define ll long long

using namespace std;

int Sum(int n ,int q ,vector<ll>numbers){

  for(int i = 0; i < n; ++i){

    ll num;cin>>num;
    numbers.push_back(num);

  }

  vector<ll>sum_num;

  vector<ll>::iterator it;

  ll sum_1 = 0;

  for( it = numbers.begin(); it != numbers.end() ; ++it){

    sum_1+=*it;
    sum_num.push_back(sum_1);

  }

  while(q--){

    ll sum_2 = 0;

    int l, r; cin >> l >> r;

    sum_2 = sum_num[r-1] - sum_num[l-1] + numbers[l-1];

    cout << sum_2 << "\n";

  }

  return 0;

}


int main(){

  int n, q;cin >> n >> q;

  vector <ll> numbers;

  Sum(n,q,numbers);


  return 0;
  
}