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

 double myPow(double x, int n) {
        long long m = n; 
        if (m < 0) {
            x = 1 / x; 
            m = -m;   
        }
        
        if (m == 0) return 1;
        
        if(m==1)
        {
            return x;
        }
        double h = myPow(x, m / 2); 
        
    
        if (m % 2 == 0) {
            return h * h; 
        } else {
            return h* h * x; 
        }
    }
    
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
