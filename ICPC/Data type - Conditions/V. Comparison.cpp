#include <iostream>
using namespace std;
int main(){
  long long a,b;
  char op;
  cin>>a>>op>>b;
  if(op=='<'){if(a<b){cout<<"Right";}else{cout<<"Wrong";}}
  if(op=='>'){if(a>b){cout<<"Right";}else{cout<<"Wrong";}}
  if(op=='='){if(a==b){cout<<"Right";}else{cout<<"Wrong";}}
}