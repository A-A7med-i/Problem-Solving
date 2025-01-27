#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool isPalindromic(string str)
    {

        int left = 0;
        int right = str.length() - 1;

        while (left < right)
        {
            if (str[left] != str[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    string firstPalindrome(vector<string> &words)
    {

        for (string word : words)
        {
            if (isPalindromic(word))
            {
                return word;
            }
        }

        return "";
    }
};