#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int n; cin >> n;

  while ( n > 0 ){

    string s; cin >> s;

    if ( s.length() > 10 ){
      cout << s[0] << s.length() - 2 << s[s.length()-1] << "\n";
    }

    else{
      cout << s << "\n";
    }

    n--;

  }

  return 0;

}