// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>
using namespace std;

string countfreq(string s)
{
    string ans = "";
    int n = s.length();

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++)
    {
        int x = s[i] - '0';
        freq[x]++;
    }

    for (int i = 0; i < freq.size(); i++)
    {
        if (freq[i] != 0)
        {
            char ch1 = '0' + freq[i];
            char ch2 = '0' + (i);
            ans += ch1;
            ans += ch2;
        }
    }
    return ans;
}

int main()
{

    string ans = countfreq("111");
    cout << ans;

    return 0;
}