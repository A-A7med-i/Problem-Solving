#include <iostream>
#include <sstream>

using namespace std;

int main()
{

  string str;
  cin >> str;

  size_t pos = str.find('?');

  string query = str.substr(pos + 1);

  stringstream ss(query);

  string token;

  while (getline(ss, token, '&'))
  {

    size_t pos = token.find('=');

    string name = token.substr(0, pos);

    string value = token.substr(pos + 1);

    cout << name << ": " << value << endl;
  }

  return 0;
}