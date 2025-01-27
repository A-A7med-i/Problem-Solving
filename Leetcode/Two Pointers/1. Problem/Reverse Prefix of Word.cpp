#include <iostream>

using namespace std;

/**
 * Reverses the prefix of a given word up to the first occurrence of a specified character.
 *
 * @param word The input word to be processed.
 * @param ch The character to search for in the word.
 * @return The modified word with the prefix reversed.
 */
class Solution
{
public:
    string reversePrefix(string word, char ch)
    {
        string str = "";

        int j = -1;

        for (size_t i = 0; i < word.size(); i++)
        {
            if (word[i] == ch)
            {
                j = i;
                break;
            }
        }

        if (j == -1)
        {
            str = word;
        }

        else
        {
            for (int i = j; i >= 0; --i)
            {
                str += word[i];
            }
            for (size_t i = j + 1; i < word.size(); i++)
            {
                str += word[i];
            }
        }

        return str;
    }
};