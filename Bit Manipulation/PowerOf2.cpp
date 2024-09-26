#include <iostream>
using namespace std;


    bool isPowerOfTwo(int n) {
        int rem=0;
        bool ans=false;
        if(n==1)
        {
            return true;
        }
       while(n>1 && rem==0)  
       {
        ans=true;
        rem = n%2;
        n=n/2;
       }

       if(rem==1)
       {
        ans=false;
       } 
       return ans;
    }

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    if(isPowerOfTwo(n))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    
    return 0;
}
