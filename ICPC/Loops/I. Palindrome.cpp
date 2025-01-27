#include <iostream>
using namespace std;

int main(){
  long long original_num,num,revnum=0;
  cin>>num;
  original_num=num;
  while(num>0){
    revnum = revnum * 10 + num % 10;
    num/=10;
  }
  cout<<revnum<<"\n";
  if(original_num==revnum){
      cout<<"YES";
  }
  else {cout<<"NO";}
}