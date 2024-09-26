#include <iostream>
using namespace std;

pair<int, int> get(int a, int b)
{
    // complete the function here
    a = a ^ b;
    b = a ^ b;         //b=a^b^b=a
    a = a ^ b;         //a=a^b^a=b

    pair<int, int> p = {a, b};

    return p;
}

int main()
{

    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    pair<int, int> p = get(a, b);

    cout << p.first << " " << p.second << endl;

    return 0;
}
