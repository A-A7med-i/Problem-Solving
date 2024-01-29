#include<bits/stdc++.h>

using namespace std;


int main(){
  int n;cin>>n;

  int numbers[n][n];

  for(int i = 0; i < n; ++i){

    for(int j = 0; j < n; ++j){
      cin>>numbers[i][j];
    }

  }

  long long m_diag, s_diag;

  for(int i = 0; i < n; ++i){

    for(int j = 0; j < n; ++j){

      if(i == j){
        m_diag+=numbers[i][j];
      }
       
      if(n-1-j == i){
        s_diag+=numbers[i][j];
      }

    }

  }

  cout<<abs(m_diag-s_diag);

  return 0;
}