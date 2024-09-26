
#include <bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    if (n == 0)
        return "0"; // Handle the case when n is 0

    string ans = "";
    while (n > 0) // Continue the loop until n becomes 0
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
    reverse(ans.begin(), ans.end()); // Reverse the string to get the correct binary representation

    return ans;
}

int toDecimal(string n)
{
    int power = n.length() - 1;

    int ans = 0;

    for (int i = 0; i < n.length(); i++)
    {
        char ch = n[i];
        if (ch == '1')
        {
            ans += pow(2, power);
        }
        power--;
    }
    return ans;
}

void bitManipulation(int num, int i)
{

    // your code here
    string binary = toBinary(num); // Convert the number to binary

    // Check if the length of the binary is less than i (out of bounds check)
    if (i > binary.length())
    {
        binary = string(i - binary.length(), '0') + binary; // Prepend zeroes if needed
    }

    int length = binary.length();

    // (1) Print the ith bit from the right (1-based index)
    cout << binary[length - i] << " ";

    // (2) Set the ith bit to 1 (if it's not already)
    if (binary[length - i] == '0')
    {
        binary[length - i] = '1';
    }
    cout << toDecimal(binary) << " "; // Convert back to decimal and print

    // (3) Clear the ith bit (set to 0)
    binary[length - i] = '0';
    cout << toDecimal(binary) << " ";
}

//{ Driver Code Starts.

int main()
{

    int n, i;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter i: ";
    cin >> i;

    bitManipulation(n, i);
    cout << "\n";

    return 0;
}
