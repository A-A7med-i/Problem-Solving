#include <iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  for(int i=0;i<n;i++){
    long long number;
    cin>>number;
    long long res=1;
    for(int j=1;j<=number;j++){
      res*=j;
    }
    cout<<res<<"\n";
  }
}