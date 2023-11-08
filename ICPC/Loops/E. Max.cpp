#include <iostream>
using namespace std;
 
int main(){
  int n;
  long long max=0;
  cin>>n;
  for(int i=0;i<n;i++){
    long long number;
    cin>>number;
    if(number>max){
      max=number;
    }
  }
  cout<<max;
}