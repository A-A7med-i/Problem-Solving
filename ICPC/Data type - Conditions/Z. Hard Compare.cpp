#include <iostream>
#include <cmath>
using namespace std;
int main(){
  double a,b,c,d;
  cin>>a>>b>>c>>d;
  double res_1=b*log(a);
  double res_2=d*log(c);
  cout<<((res_1>res_2)?"YES":"NO");
}