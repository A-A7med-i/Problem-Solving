#include <iostream>
using namespace std;
int main(){
  char X;
  cin>>X;
  if (X>='a'&&X<='z'){X-=32;}
  else if(X>='A'&&X<='Z'){X+=32;}
  cout<<char(X);
}