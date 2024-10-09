/*
Generate all binary strings without consecutive 1’s
Given an integer, K. Generate all binary strings of size k without consecutive 1’s.

Examples: 

Input : K = 3  
Output : 000 , 001 , 010 , 100 , 101 
Input : K  = 4 
Output :0000 0001 0010 0100 0101 1000 1001 1010

*/



#include <iostream>
#include <vector>
using namespace std;


void AllBinaryStrings(int n, string s)
{
    if (n == 0)
    {
        cout << s << " ";
        return;
    }
    AllBinaryStrings(n - 1, s + "0");
    AllBinaryStrings(n - 1, s + "1");
}

void generateBinaryStrings(int k, string current) {
    // Base case: if the current string's length is equal to k, print it
    if (current.length() == k) {
        cout << current << " ";
        return;
    }

    // Append '0' and recurse
    generateBinaryStrings(k, current + '0');

    // Append '1' only if the last character is not '1'
    if (current.empty() || current.back() == '0') {
        generateBinaryStrings(k, current + '1');
    }
}

int main() {
    int K;
    cout << "Enter the value of K: ";
    cin >> K;

    cout << "All binary strings of size " << K  << endl;
    AllBinaryStrings(K, "");
    cout << endl;

    cout << "All binary strings of size " << K << " without consecutive 1’s are: " << endl;
    cout << "Output: ";
    generateBinaryStrings(K, "");
    cout << endl;

    return 0;
}
