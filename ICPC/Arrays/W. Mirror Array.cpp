#include <iostream>
using namespace std;

int main(){
  int n,m;cin>>n>>m;

  int number[n][m];

  for(int i = 0; i < n; ++i){
  
    for(int j = 0; j < m; ++j){
      cin>>number[i][j];
    }

  }

  for(int i = 0; i < n; ++i){

    for(int j = m-1; j >= 0; --j){
      cout<<number[i][j]<<" ";
    }

    cout<<"\n";

  }

  return 0;

}