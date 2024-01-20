#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void lowest(int n ,vector<int>numbers){
  vector<int>::iterator ve;
  for(int i=0;i<n;++i){
    int num;
    cin>>num;
    numbers.push_back(num);
  }
  vector<int>::iterator min_num=min_element(numbers.begin(),numbers.end());
  int pos;
  for(ve=numbers.begin();ve!=numbers.end();++ve){
    if(*min_num==*ve){
      pos=distance(numbers.begin(),ve);
      break;
    }
  }
  cout<<*min_num<<" "<<pos+1;
}




int main(){
  int n;
  cin>>n;
  vector<int>numbers;
  lowest(n,numbers);
  return 0;
}