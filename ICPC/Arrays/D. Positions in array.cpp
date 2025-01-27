#include <iostream>
using namespace std;

int pos(long long n,long long numbers[]){
  for(int i=0;i<n;i++){
    cin>>numbers[i];
  }
  for(int j=0;j<n;j++){
    if(numbers[j]<=10){
      cout<<"A"<<"["<<j<<"] = "<<numbers[j]<<"\n";
    }
  }
  return 0;
}


int main(){
  long long n;
  cin>>n;
  long long numbers[n];
  pos(n,numbers);
  return 0;
}