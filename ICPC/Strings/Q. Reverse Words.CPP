#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  string s;

  int n = 0;

  while (cin >> s)
  {
    reverse(s.begin(), s.end());

    if (n)
    {
      cout << " ";
    }

    n = 1;

    cout << s;
    }

  return 0;
}