#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // Define stack
    stack <int> stk;

    // Add an element
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);

    cout<<"top Element: "<<stk.top()<<endl;

    while(!stk.empty())
    {
        
    }

    cout<<"Hello World"<<endl;
    return 0;
}