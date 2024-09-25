// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int Sum(int array[],int n)
{
    if(n<0)
    {
        return 0;
    }
    int last=array[n-1];
    return last+Sum(array,n-1);
}

int main() {
    // Write C++ code here
    
    int n;
    cin>>n;
    
    int array[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    
    int ans=Sum(array,n);
    
    cout<<"Sum = "<<ans<<endl;

    return 0;
}