#include <iostream>
using namespace std;

int Replace(long long n , long long numbers[]){
  for(int i=0;i<n;i++){
    cin>>numbers[i];
    if(numbers[i]>0){
      numbers[i]=1;
    }
    else if(numbers[i]<0){
      numbers[i]=2;
    }
    else {
      numbers[i]=0;
    }
  }
  return numbers[n];
}


int main(){
  long long n;
  cin>>n;
  long long numbers[n];
  Replace(n,numbers);
  for(int i=0;i<n;i++){
    cout<<numbers[i]<<" ";
  }
  return 0;
}