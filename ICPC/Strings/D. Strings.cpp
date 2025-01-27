#include <iostream>
#include <string>

using namespace std;

int main(){

  string a, b; cin >> a >> b;

  cout << a.size() << " " << b.size() << "\n";

  cout << a << b << "\n";
   
  string s = a;

  a[0] = b[0];

  b[0] = s[0];

  cout<<a<<" "<<b;

  return 0;
}