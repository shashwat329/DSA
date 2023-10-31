#include <iostream>
#include <stack>
using namespace std;

bool balancedparenthsis(string str)
{
    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            s.push(str[i]);
        }
        else if (str[i] == '}' || str[i] == ']' || str[i] == ')')
        {
            if (s.empty())
            {
                return false; // No matching opening bracket found.
            }

            if ((str[i] == '}' && s.top() == '{') ||(str[i] == ']' && s.top() == '[') ||(str[i] == ')' && s.top() == '('))
            {
                s.pop();
            }
            else
            {
                return false; // Mismatched opening and closing brackets.
            }
        }
        return s.empty();
    }

    return s.empty(); // If the stack is empty, all brackets were matched.
}

int main()
{
    string s = "([]{}())";
    cout << (balancedparenthsis(s) ? "Balanced" : "Not Balanced") << endl;
    return 0;
}
