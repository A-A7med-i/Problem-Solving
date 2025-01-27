#include <iostream>
#include <algorithm>
using namespace std;

string smallestString(string s)
{
    string smallest = s;
    int n = s.length();

    for (int i = 1; i < n; i++)
    {
        string part1 = s.substr(0, i);
        string part2 = s.substr(i, n - i);

        sort(part1.begin(), part1.end());
        sort(part2.begin(), part2.end());

        string sortedString = part1 + part2;

        smallest = min(smallest, sortedString);
    }

    return smallest;
}

int main()
{
    string s;
    cin >> s;

    string result = smallestString(s);
    cout << result << endl;

    return 0;
}