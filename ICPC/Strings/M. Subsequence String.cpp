#include <iostream>
#include <string>

using namespace std;


int main(){
  string s; cin >> s;

  string target = "hello";

  int i = 0;

  bool seq = false;

  for(char c : s){

    if(c == target[i]){

      i++;

      if(i == target.size()){
        seq = true;
        break;
      }

    }

  }

  if(seq) cout << "YES";

  else cout << "NO";


  return 0;

}