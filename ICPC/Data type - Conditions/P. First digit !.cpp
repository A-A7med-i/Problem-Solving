#include <iostream>
using namespace std;

int main(){
  long long x;
  cin>>x;
  string x_str=to_string(x);
  char first_digit=x_str[0];
  cout<<(int(first_digit)%2==0?"EVEN":"ODD");
}