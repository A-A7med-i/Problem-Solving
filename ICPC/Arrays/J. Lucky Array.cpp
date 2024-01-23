#include <iostream>
#include <vector>
using namespace std;


int lucky(long long n , vector<long long>numbers){
  for(int i=0;i<n;i++){
    long long num;
    cin>>num;
    numbers.push_back(num);
  }

  long long min=numbers[0];

  for(int j=0;j<n;j++){
    if(numbers.at(j)<min){
      min=numbers.at(j);
    }
  }

  long long count=0;

  for(int k=0;k<n;k++){
    if(numbers.at(k)==min){
      count++;
    }
  }
  
  return count;
}


int main(){
  long long n;cin>>n;

  vector<long long > numbers;

  long long count = lucky(n,numbers);

  cout<<(count%2 ? "Lucky" : "Unlucky");

  return 0;
}