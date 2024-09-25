#include <iostream>
using namespace std;

int nFibonacci(int n){
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    return nFibonacci(n-1)+nFibonacci(n-2);
}
int main(){
    
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int ans=nFibonacci(n);
    cout<<"Answer: "<<ans<<endl;
    return 0;
}