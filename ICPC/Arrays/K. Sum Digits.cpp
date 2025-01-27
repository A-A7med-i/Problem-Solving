#include <iostream>
using namespace std;


int main(){
  long long n,sum=0;
  cin>>n;
  string digits;
  cin>>digits;
  for(int i=0;i<n;i++){
    sum+=digits[i]-'0';
  }
  cout << sum;
  return 0;
}