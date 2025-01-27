#include <iostream>
using namespace std;

int main(){
  int n; cin >> n;

  while(n--){

    string s, t, res; cin >> s >> t;

    for(int i = 0; i < max( s.length(), t.length() ); ++i){

      if(i < s.length()) res+=s[i];

      if(i < t.length()) res+=t[i];

    }

    cout << res << "\n";

  }

  return 0;

}