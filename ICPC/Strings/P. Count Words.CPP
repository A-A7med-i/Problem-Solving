#include <iostream>
#include <string>
#define ll long long

using namespace std;

void Count(string s)
{
    ll count = 0;
    bool insideWord = false;
    for (auto it = s.begin(); it != s.end(); ++it)
    {
        if (*it == '!' || *it == ',' || *it == '?' || *it == '.')
        {
            if (insideWord)
            {
                count++;
                insideWord = false;
            }
        }
        else if (*it == ' ')
        {
            if (insideWord)
            {
                count++;
                insideWord = false;
            }
        }
        else
        {
            insideWord = true;
        }
    }
    if (insideWord)
    {
        count++;
    }

    cout << count;
}

int main()
{
    string s;
    getline(cin, s);

    Count(s);

    return 0;
}
