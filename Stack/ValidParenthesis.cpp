#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution
{
public:
    // Function to check if the character is an opening bracket
    bool isOpen(char c)
    {
        return c == '(' || c == '{' || c == '[';
    }

    // Function to check if the closing bracket matches the top of the stack
    bool match(char t, char c)
    {
        if ((c == '(' && t == ')') || (c == '[' && t == ']') || (c == '{' && t == '}'))
        {
            return true;
        }
        return false;
    }

    // Main function to check if the given string has valid brackets
    bool isValid(string s)
    {
        stack<char> stk;

        int n = s.length();
        // If the string length is odd, it cannot be valid
        if (n % 2 != 0)
        {
            return false;
        }

        if (isOpen(s[n - 1]) || !isOpen(s[0]))
        {
            return false;
        }

        // Iterate through each character in the string
        for (int i = 0; i < n; i++)
        {
            if (isOpen(s[i]))
            {
                // If it's an opening bracket, push it onto the stack
                stk.push(s[i]);
            }
            else
            {
                // If it's a closing bracket, check for a match
                if (stk.empty() || !match(s[i], stk.top()))
                {
                    return false;
                }
                // If match is found, pop the top element from the stack
                stk.pop();
            }
        }

        // If stack is empty at the end, all brackets were matched
        return stk.empty();
    }
};

int main()
{
    Solution solution;

    // Take input from the user
    string s;
    cout << "Enter a string of brackets: ";
    cin >> s;

    // Check if the string has valid brackets
    if (solution.isValid(s))
    {
        cout << "The string has valid brackets." << endl;
    }
    else
    {
        cout << "The string has invalid brackets." << endl;
    }

    return 0;
}
