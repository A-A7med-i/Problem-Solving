#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
int main(){
  int n;
  cin>>n;
  vector<int>numbers;
 
  for(int i=0;i<n;i++){
    int  num;
    cin>>num;
    numbers.push_back(num);
  }
 
  vector<int>::iterator it,ite;
  it=numbers.begin();
  ite=numbers.end();
  sort(it,ite);
 
  for(int j=0;j<n;j++){
    cout<<numbers.at(j)<<" ";
  }

  return 0;
 
}