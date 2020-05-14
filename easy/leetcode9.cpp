
// 判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

// 示例 1:

// 输入: 121
// 输出: true
// 示例 2:

// 输入: -121
// 输出: false
// 解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
// 示例 3:

// 输入: 10
// 输出: false
// 解释: 从右向左读, 为 01 。因此它不是一个回文数。



#include <iostream>
#include <sstream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(int x)
{
    if (x < 0)
    {
        return false;
    }
    int y = 0;
    int a = x;
    while (x)
    {
        if (y > INT_MAX / 10 || y < INT_MIN / 10)
            return 0;
        y *= 10;
        y += x % 10;
        x /= 10;
    }

    return a == y;
}

// 转字符串
/* 
    string result = "10000";  
    int n = 0;  
    stream << result;  
    stream >> n;  //n等于10000 

 */
bool isPalindrome1(int x)
{
    if (x < 0)
    {
        return false;
    }
    long v;
    string y = to_string(x);
    reverse(y.begin(), y.end());
    stringstream out(y);
    out >> v;

    return v == x;
}

int main()
{
    isPalindrome1(121);
}
