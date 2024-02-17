#include <iostream>
#include <map>

using namespace std;

void solve(string s){

  map <char, int> charCount;

  for(char c : s){

    if(isalpha(c)) charCount[c]++;

  }

  for(auto p : charCount){

    cout << p.first << " : " << p.second << endl;
  }


}


int main(){

  string s; cin >> s;

  solve(s);


  return 0;
}