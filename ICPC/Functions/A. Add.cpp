#include <iostream>
using namespace std;

int Add(long x, long y)
{
  return x + y;
}

int main()
{
  int x, y;
  cin >> x >> y;

  long add = Add(x, y);

  cout << add << endl;

  return 0;
}