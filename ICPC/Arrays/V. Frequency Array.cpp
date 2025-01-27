#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n,m;cin>>n>>m;

  vector <int> numbers(n);

  for(int i = 0; i < n; i++){
    cin>>numbers[i];
  }

  vector <int> count(m+1, 0);// initialize vector all element = 0


  for(int i = 0; i < n; i++){
    count[numbers[i]]++;
  }

  for(int i = 1; i <= m; i++){
    cout<<count[i]<<"\n";
  }
  

  return 0;
}