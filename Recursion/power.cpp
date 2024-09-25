#include <iostream>
using namespace std;

int power(int a,int b)
{

    if(b==0)
    {
        return 1;
    }

    return a*power(a,b-1);
};
int main(){
    
    
    int m;
    cout<<"Enter Number: ";
    cin >> m;

    int n;
    cout<<"Enter Power: ";
    cin >> n;

    int ans=power(m,n);

    cout<<"Answer: "<<ans<<endl;

    return 0;
}
