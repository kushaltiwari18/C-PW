#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int calc(int v1, int v2, char op)
{
    if (op == '^')
        return pow(v1, v2);
    if (op == '*')
        return v1 * v2;
    if (op == '/')
        return v1 / v2;
    if (op == '+')
        return v1 + v2;
    return v1 - v2;
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' or ch == '/')
        return 2;
    if (ch == '+' or ch == '-')
        return 1;
    else
        return -1;
}

int eval(string &str)
{
    stack<int> nums;
    stack<char> operand;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            nums.push(str[i] - '0');
        }
        else if (str[i] == '(')
        {
            operand.push('(');
        }
        else if (str[i] == ')')
        {
            while (!operand.empty() && operand.top() != '(')
            {
                char op = operand.top();
                operand.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            if (!operand.empty())
                operand.pop();
        }
        else
        {
            while (!operand.empty() && precedence(operand.top()) >= precedence(str[i]))
            {
                char op = operand.top();
                operand.pop();
                int v2 = nums.top();
                nums.pop();
                int v1 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            operand.push(str[i]);
        }
    }

    while (!operand.empty())
    {
        char op = operand.top();
        operand.pop();
        int v2 = nums.top();
        nums.pop();
        int v1 = nums.top();
        nums.pop();
        nums.push(calc(v1, v2, op));
    }
    return nums.top();
}


int main(){

    string str = "1+(2*(3-1))+2";
    cout<<eval(str)<<endl;

    return 0;
}