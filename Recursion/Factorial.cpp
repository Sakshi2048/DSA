#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    int ans=factorial(n);

    cout<<"Answer: "<<ans<<endl;
    return 0;
}