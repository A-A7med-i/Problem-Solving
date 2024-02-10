#include <iostream>
#include <string>

using namespace std;
 
int main(){

  string s;
  getline(cin,s);

  string out;

  for ( char i : s ) {

    if(i == '\\') break; 

    out += i;

  }
  
  cout << out << endl;
  

  return 0;
}