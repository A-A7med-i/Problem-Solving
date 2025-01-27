#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

  string s, rev_s; cin>>s;

  rev_s = s;

  string::iterator it_1 = rev_s.begin();

  string::iterator it_2 = rev_s.end();

  reverse(it_1,it_2);

  if (s == rev_s) {
      cout << "YES" << endl;
  } else {
      cout << "NO" << endl;
  }

  return 0;

}