#include<bits/stdc++.h>
using namespace std;

int toDecimal(string n)
    {
        int power=n.length()-1;
        
        int ans=0;
        
        for(int i=0; i<n.length(); i++)
        {
            char ch=n[i];
            if(ch=='1')
            {
                ans+=pow(2,power);
            }
            power--;
        }
        return ans;
    }

int main()
{
    string n;
    cout<<"Enter Binary Number: ";
    cin>>n;
    
    cout<<"Decimal Equivalent: "<<toDecimal(n);

    return 0;
}