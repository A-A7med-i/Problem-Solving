# include <iostream>
using namespace std;

int main(){
  long long n;
  cin>>n;
  cout<<n/365<<" years"<<endl;
  cout<<n%365/30<<" months"<<endl;
  cout<<(n%365)%30<<" days"<<endl;
}