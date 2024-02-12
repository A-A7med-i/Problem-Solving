#include<iostream>
#include<string>

using namespace std;

int main(){
  string s; cin >> s;

  long long res=0;

  for(int i = 0; i < s.size(); i++){
    res += ( int (s[i]) - '0' );
  }

  cout << res << endl;

  return 0;
}
