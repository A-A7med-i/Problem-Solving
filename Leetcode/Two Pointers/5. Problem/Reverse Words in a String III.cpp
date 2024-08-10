#include <iostream>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {

        int size = s.length();

        for (size_t i = 0; i < size; i++)
        {
            while (i < size && s[i] == ' ')
            {
                i++;
            }

            int j = i;

            while (j < size && s[j] != ' ')
            {
                j++;
            }

            reverse(s.begin() + i, s.begin() + j);

            i = j;
        }

        return s;
    }
};