// leetcode 747

// 在一个给定的数组nums中，总是存在一个最大元素 。

// 查找数组中的最大元素是否至少是数组中每个其他数字的两倍。

// 如果是，则返回最大元素的索引，否则返回-1。

// 输入: nums = [3, 6, 1, 0]
// 输出: 1
// 解释: 6是最大的整数, 对于数组中的其他整数,
// 6大于数组中其他元素的两倍。6的索引是1, 所以我们返回1.

#include <iostream>
#include <vector>

using namespace std;

int dominantIndex(vector<int> &nums)
{
    int max = 0;
    int index = 0;
    for (int i = 0; i < (nums.size()); i++)
    {

        if (nums[i] > max)
        {
            max = nums[i];
            index = i;
        }
    }
    for (int i = 0; i < (nums.size()); i++)
    {
        if (max == nums[i])
        {
            continue;
        }
        if (max < 2 * nums[i])
        {
            return -1;
        }
    }
    return index;
}

int main()
{
    vector<int> arr = {3, 6, 1, 0};
    cout << dominantIndex(arr);

}