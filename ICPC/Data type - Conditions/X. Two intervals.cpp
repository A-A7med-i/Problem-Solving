#include <iostream>
#define ll long long 
using namespace std;
int main(){
  ll l1,r1,l2,r2,intersection_1,intersection_2;
  cin>>l1>>r1>>l2>>r2;
  intersection_1=max(l1,l2);
  intersection_2=min(r1,r2);
  if(intersection_1>intersection_2){cout<<-1;}
  else {cout<<intersection_1<<" "<<intersection_2;}
}