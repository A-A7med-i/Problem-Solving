#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Finds the minimum average of the smallest and largest elements in the given vector of integers.
 *
 * @param nums The vector of integers to find the minimum average for.
 * @return The minimum average of the smallest and largest elements in the vector.
 */
class Solution
{
public:
    double minimumAverage(vector<int> &nums)
    {
        vector<double> averages;

        sort(nums.begin(), nums.end());

        int *i = nums.data();
        int *j = &nums.back();

        for (size_t k = 0; k < nums.size(); k++)
        {
            averages.push_back(static_cast<double>(*i + *j) / 2);
            i++;
            j--;
        }

        double mnAvg = *min_element(averages.begin(), averages.end());

        return mnAvg;
    }
};