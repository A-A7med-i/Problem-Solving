#include <iostream>
#include <string>

using namespace std;

int main(){

  int n; cin >> n;

  while(n--){

    string s; cin >> s;

    if( s.find("010") != string::npos || s.find("101") != string::npos){
      cout << "Good";
    }

    else{
      cout << "Bad";
    }

    cout << endl;

  }

  return 0;

}