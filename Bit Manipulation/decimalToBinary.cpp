#include <iostream>
#include <algorithm>
using namespace std;

string toBinary(int n)
{
    if (n == 0) return "0";  // Handle the case when n is 0
    
    string ans = "";
    while (n > 0)  // Continue the loop until n becomes 0
    {
        if (n % 2 == 0)
        {
            ans += '0';
        }
        else
        {
            ans += '1';
        }
        n = n / 2;
    }
    reverse(ans.begin(), ans.end());  // Reverse the string to get the correct binary representation
    
    return ans;
}

int main() {
    cout << "Hello" << endl;
    cout << toBinary(9) << endl;  // Output: 1001
    return 0;
}
