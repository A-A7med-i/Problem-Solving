#include <iostream>

using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {

        int szA = word1.length(), szB = word2.length();

        string mergeWords = "";

        int ptr1 = 0, ptr2 = 0;

        while (szA > ptr1 && szB > ptr2)
        {
            mergeWords += word1[ptr1++];
            mergeWords += word2[ptr2++];
        }

        // Append any remaining characters from word1
        while (ptr1 < szA)
        {
            mergeWords += word1[ptr1++];
        }

        // Append any remaining characters from word2
        while (ptr2 < szB)
        {
            mergeWords += word2[ptr2++];
        }

        return mergeWords;
    }
};