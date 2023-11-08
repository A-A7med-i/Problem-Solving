#include <iostream>
using namespace std;
 
int main(){
  long long n;
  cin>>n;
  for(int i=n;i<=n;i++){
    for(int j=1;j<=12;j++){
      cout<<i<<" * "<<j<<" = "<<i*j<<"\n";
    }
  }
}