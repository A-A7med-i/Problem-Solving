#include <iostream>
#include <vector>
#define ll long long 

using namespace std;

string Sub(int n, int m, vector <ll> number_1, vector <ll> number_2){

  for(int i = 0; i < n; ++i){

    ll num;cin>>num;

    number_1.push_back(num);

  }

  for(int i = 0; i < m; ++i){

    ll num;cin>>num;

    number_2.push_back(num);

  } 

  vector <ll> ::iterator ptr_1 = number_1.begin();
  vector <ll> ::iterator ptr_2 = number_2.begin();

  while( ptr_1 != number_1.end() && ptr_2 != number_2.end() ){
    if( *ptr_1==*ptr_2 ){

      ptr_1++;
      ptr_2++;

    }
    else{

      ptr_1++;

    }

  }


  if (ptr_2 == number_2.end()) return "YES" ;
    

  return "NO";

}


int main(){

  int n,m;cin>>n>>m;

  vector <ll> number_1;

  vector<ll>number_2;

  string is_sub = Sub(n,m,number_1,number_2);

  cout<<is_sub<<endl;

  return 0;

}