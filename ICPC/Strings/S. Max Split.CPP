#include <iostream>
#include <vector>

using namespace std;

int main()
{
  string s;
  cin >> s;

  vector<string> balancedStrings;

  int count = 0;

  string currentstr = "";

  for (char c : s)
  {
    currentstr += c;
    if (c == 'R')
    {
      count++;
    }
    else
    {
      count--;
    }
    if (count == 0)
    {
      balancedStrings.push_back(currentstr);
      currentstr = "";
    }
  }

  cout << balancedStrings.size() << "\n";

  for (string &str : balancedStrings)
  {
    cout << str << "\n";
  }

  return 0;
}