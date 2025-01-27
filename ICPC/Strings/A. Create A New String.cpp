#include <iostream>

using namespace std;

int main(){

  string s, t; cin >> s >> t;

  long long size_1, size_2;

  size_1 = s.size();

  size_2 = t.size();

  cout << size_1 << " " << size_2 << "\n";

  cout << s << " " << t;

  return 0;
}