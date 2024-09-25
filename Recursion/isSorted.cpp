// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool isSorted2(int array[],int s,int e)
{
    bool result=false;
    if(s>=e)
    {
        return true;
    };
    int m=(s+e)/2;
    bool ans1=isSorted2(array,s,m);
    bool ans2=isSorted2(array,m+1,e);
    bool ans3=array[m]<array[m+1];
   
    result=ans1&&ans2&&ans3;

    return result;
}

bool isSorted3(int array[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(array[0]<array[1])
    {
        return true;
    }
    if(array[n-1]<array[n-2])
    {
        return false;
    }
    
    return isSorted3(array,n-1);
}
bool isSorted1(int array[], int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(array[0]>array[1])
    {
        return false;
    }
    else
    {
        return isSorted1(array,n-1);
    }
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
    
    //bool ans=isSorted1(array,n);
    bool ans=isSorted2(array,0,n-1);
    //bool ans=isSorted3(array,n);
    
    if(ans)
    {
        cout<<"Sorted"<<endl;
    }
    else
    {
        cout<<"Not Sorted"<<endl;
    }

    return 0;
}