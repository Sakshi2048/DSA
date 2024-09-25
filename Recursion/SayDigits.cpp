#include <iostream>
using namespace std;

void saydigits(int n,string array[]){

    if(n==0){
        return;
    }
    else
    {
        int digit=n%10;
        saydigits(n/10,array);
        cout<<array[digit]<<" ";
    }
    
}
int main(){
    
    string array[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

    saydigits(n,array);

    return 0;
}