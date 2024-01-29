#include <iostream>
#define ll long long
using namespace std;



int main(){
  ll n,m;cin>>n>>m;

  ll numbers[n][m];

  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      cin>>numbers[i][j];
    }
  }

  ll x;cin>>x;

  bool found=false;

  for(int i = 0;i < n && !found; i++){

    for(int j = 0; j < m; j++){

      if(numbers[i][j] == x){
        found=true;
        break;
      }

      else{
        found=false;
      }

    }

  }

  cout<<(found ? "will not take number" : "will take number");

  return 0;
}