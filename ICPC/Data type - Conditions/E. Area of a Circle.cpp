# include <iostream>
# include <iomanip>
using namespace std;

int main(){
  long double R;
  cin>>R;
  long double Area=(3.141592653*R*R);
  cout<<fixed<<setprecision(9);
  cout<<Area;
}