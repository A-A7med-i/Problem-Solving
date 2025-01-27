#include <iostream>
using namespace std;

int main(){
  long long n,res=0;
  cin>>n;
  long long numbers[n];
  for(int i=0;i<n;i++){
    cin>>numbers[i];
    res+=numbers[i];
  }
  cout<<abs(res);
  return 0;
}