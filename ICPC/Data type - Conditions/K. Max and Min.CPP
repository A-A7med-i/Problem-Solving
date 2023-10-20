#include <iostream>
using namespace std;

int main(){
  long long A,B,C;
  cin >> A >> B >> C;
  long long minVal=min(min(A,B),C);
  long long maxVal=max(max(A,B),C);
  cout<<minVal<<" "<<maxVal;
}