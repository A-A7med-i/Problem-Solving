#include <iostream>
using namespace std;

int main(){
  long long a,b,c;
  long long max_val,min_val;
  cin>>a>>b>>c;
  max_val=max(max(a,b),c);
  min_val=min(min(a,b),c);
  cout<<min_val<<"\n";
  if((a>=b&&a<=c)||(a<=b&&a>=c)){cout<<a<<endl;}
  else if((a<=b&&b<=c)||(a>=b&&b>=c)){cout<<b<<endl;}
  else if((c>=a&&b>=c)||(c<=a&&b<=c)){cout<<c<<endl;}
  cout<<max_val<<"\n";
  cout<<endl;
  cout<<a<<endl<<b<<endl<<c;
}