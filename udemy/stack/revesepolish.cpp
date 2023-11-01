#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;
int evalRPN(vector<string> &tokens)
{
    stack<int> s;
    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
        {
            if (s.empty())
            {
                return -1;
            }
            else
            {
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                if (tokens[i] == "+")
                {
                    s.push(a + b);
                }
                else if (tokens[i] == "-")
                {
                    s.push(a - b);
                }
                else if (tokens[i] == "*")
                {
                    s.push(a * b);
                }
                else if (tokens[i] == "/")
                {
                    s.push(a / b);
                }
            }
        }
        else
        {
            int num = stoi(tokens[i]);
            s.push(num);
        }
    }
    return s.top();
}
int main()
{
vector<string> s;
s.push_back("10");
s.push_back("6");
s.push_back("9");
s.push_back("3");
s.push_back("+");
s.push_back("-11");
s.push_back("*");
s.push_back("/");
s.push_back("17");
s.push_back("+");
s.push_back("5");
s.push_back("+");
    int ans = evalRPN(s);
    cout << ans << endl;
}