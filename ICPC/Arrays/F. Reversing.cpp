#include <iostream>
using namespace std;



int revers(long long n , long long numbers[]){
  for(int i=0;i<n;i++){
    cin>>numbers[i];
  }
  for(int j=n-1;j>=0;j--){
    cout<<numbers[j]<<" ";
  }
  return 0;
}




int main(){
  long long n;
  cin>>n;
  long long numbers[n];
  revers(n,numbers);
  return 0;
}