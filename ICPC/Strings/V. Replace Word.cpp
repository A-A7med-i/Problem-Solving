#include <iostream>
using namespace std;

string replaceWord(string s)
{
  size_t found = s.find("EGYPT");
  while (found != string::npos)
  {
    s.replace(found, 5, " ");
    found = s.find("EGYPT", found + 1);
  }
  return s;
}

int main()
{
  string s;
  getline(cin, s);

  string res = replaceWord(s);

  cout << res << endl;

  return 0;
}