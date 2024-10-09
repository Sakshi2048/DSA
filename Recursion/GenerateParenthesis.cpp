#include <bits/stdc++.h>
using namespace std;

// Helper function to check if a given parentheses sequence is valid
bool isvalid(string s)
{
    vector<char> t;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            t.push_back(s[i]); // Push opening bracket to stack
        }
        else if (t.size() <= 0)
        {
            return false; // Invalid if no matching opening bracket
        }
        else if (s[i] == ')' && t.back() == '(')
        {
            t.pop_back(); // Pop the matching opening bracket
        }
    }
    return t.size() == 0; // Valid if stack is empty
}

vector<string> generateParenthesis(int n)
{
    string mytemp = "";
    vector<string> ans;

    // Initial string with n '(' followed by n ')'
    for (int i = 0; i < n; i++)
    {
        mytemp += "(";
    }
    for (int i = 0; i < n; i++)
    {
        mytemp += ")";
    }

    ans.push_back(mytemp); // Add the first valid sequence

    // Generate all next permutations of the parentheses string
    while (next_permutation(mytemp.begin(), mytemp.end()))
    {
        if (mytemp[0] == ')')
        {
            break; // Stop if the permutation starts with ')', invalid
        }
        if (isvalid(mytemp))
        {
            ans.push_back(mytemp); // Add valid permutation
        }
    }

    return ans; // Return the list of valid permutations
}

int main()
{
    int n = 3;
    vector<string> ans = generateParenthesis(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    return 0;
}