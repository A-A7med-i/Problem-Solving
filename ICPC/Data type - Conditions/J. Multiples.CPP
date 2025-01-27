#include <iostream>
using namespace std;
int main(){
  long long A,B;
  cin>>A>>B;
  cout<<(A%B==0||B%A==0?"Multiples":"No Multiples");
}