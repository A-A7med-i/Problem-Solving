#include <iostream>
using namespace std;


int main(){
  long long n, x;
  cin>>n;
  long long numbers[n];
  for(int i=0;i<n;i++){
    cin>>numbers[i];
  }
  cin>>x;
  long long pos=-1;
  for(int j=0;j<n;j++){
    if(x==numbers[j]){
      pos=j;
      break;
    }
  }
  cout<<pos;
  return 0;
}