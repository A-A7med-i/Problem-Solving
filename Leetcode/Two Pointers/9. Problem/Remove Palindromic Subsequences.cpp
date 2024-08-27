#include <iostream>

using namespace std;

class Solution
{
public:
    int removePalindromeSub(string s)
    {
        int right = s.length() - 1;
        int left = 0;

        while (right > left)
        {
            if (s[right] != s[left])
                return 2;

            right--;
            left++;
        }

        return 1;
    }
};