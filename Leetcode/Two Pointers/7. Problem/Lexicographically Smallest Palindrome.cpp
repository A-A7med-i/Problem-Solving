#include <iostream>

using namespace std;

class Solution
{
public:
    string makeSmallestPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;

        while (right > left)
        {
            if (s[left] != s[right])
                s[left] = s[right] = min(s[left], s[right]);

            left++;
            right--;
        }

        return s;
    }
};