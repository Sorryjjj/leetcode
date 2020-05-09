// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。

// 有效字符串需满足：

// 左括号必须用相同类型的右括号闭合。
// 左括号必须以正确的顺序闭合。
// 注意空字符串可被认为是有效字符串。

// 示例 1:

// 输入: "()"
// 输出: true
// 示例 2:

// 输入: "()[]{}"
// 输出: true

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/valid-parentheses
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s)
{
    if (s.empty())
    {
        return true;
    }

    stack<char> stc;

    for (char c : s)
    {
        if (c == ')' || c == ']' || c == '}')
        {
            if (!stc.empty() && stc.top() == c)
            {
                stc.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            switch (c)
            {
            case '(':
                stc.push(')');
                break;
            case '[':
                stc.push(']');
                break;
            case '{':
                stc.push('}');
                break;
            }
        }
    }
    return stc.empty();
}

int reverse(int x)
{
    if (x / 10 == 0)
    {
        return x;
    }
    int y = 0;
    while (x)
    {
        y *= 10;
        y += x % 10;
        cout << y << endl;

        x /= 10;
    }
    // cout << y;
    return y;
}

int main()
{
    // cout << isValid("()[]{}") << endl;
    reverse(-321);
}