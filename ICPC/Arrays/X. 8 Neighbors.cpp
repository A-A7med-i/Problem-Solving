#include <iostream>
using namespace std;


int main(){
  int n,m;cin>>n>>m;

  char symbol[101][101];

  for(int i = 1; i <= n; ++i){

    for(int j = 1; j <= m; ++j){
      cin>>symbol[i][j];
    }

  }

  int x,y;cin>>x>>y;

  if((symbol[x][y-1]!='.')&&
     (symbol[x][y+1]!='.')&&
     (symbol[x-1][y]!='.')&&
     (symbol[x+1][y]!='.')&&
     (symbol[x-1][y+1]!='.')&&
     (symbol[x-1][y-1]!='.')&&
     (symbol[x+1][y-1]!='.')&&
     (symbol[x+1][y+1]!='.')){
      cout<<"yes";
  }

  else{
    cout<<"no";
  }

  return 0;
}