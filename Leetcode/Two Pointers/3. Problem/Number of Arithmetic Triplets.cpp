#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int arithmeticTriplets(vector<int> &nums, int diff)
    {
        int size = nums.size();

        int count = 0;

        for (size_t i = 0; i < size - 2; i++)
        {
            for (size_t j = i + 1; j < size - 1; j++)
            {
                for (size_t k = i + 2; k < size; k++)
                {
                    if (nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
                    {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};