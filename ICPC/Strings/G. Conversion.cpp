#include <iostream>
#include <string>

using namespace std;

int main(){
  string s,n_s; cin >> s;

  for(int i = 0; i < s.size(); i++){

    if(isupper(s[i])){
      n_s += char(tolower(s[i]));
    }

    else if(s[i]==','){
      n_s += ' ';
    }

    else{
      n_s += char(toupper(s[i]));
    }

  }

  cout << n_s << endl;


  return 0;

}