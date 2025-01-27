#include <iostream>
using namespace std;
int main(){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int num1=a%100;
  int num2=b%100;
  int num3=c%100;
  int num4=d%100;
  int res=num1*num2*num3*num4;
  if(res%100<=9){
    cout<<"0"<<res%100;
  }
  else{
    cout<<res%100;
  }
}