#include <iostream>
using namespace std;

int main(){
  long long a,b,c;
  char op,equal;
  cin>>a>>op>>b>>equal>>c;
  if(op=='+'){if(a+b==c){cout<<"Yes";}else{cout<<a+b;}}
  else if(op=='-'){if(a-b==c){cout<<"Yes";}else{cout<<a-b;}}
  else if(op=='*'){if(a*b==c){cout<<"Yes";}else{cout<<a*b;}}
}