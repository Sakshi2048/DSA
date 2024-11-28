// CPP Program to implement Deque in STL
#include <deque>
#include <iostream>

using namespace std;

void showdq(deque<int> g)
{
    for(int i=0; i<g.size(); i++)
    {
        cout<<g[i]<<" ";
    }
    cout<<endl;
}

int main()
{
	deque<int> d;
	
	//Add elements at back
	d.push_back(10);
	
	//Add element at front
	d.push_front(20);
	
	d.push_back(30);
	d.push_front(15);
	cout << "The deque d is : ";
	showdq(d);

	cout << "\nd.size() : " << d.size();
	cout << "\nd.max_size() : " << d.max_size();

	cout << "\nd.at(2) : " << d.at(2);
	cout << "\nd.front() : " << d.front();
	cout << "\nd.back() : " << d.back();

	cout << "\nd.pop_front() : ";
	d.pop_front();
	showdq(d);

	cout << "\nd.pop_back() : ";
	d.pop_back();
	showdq(d);

	return 0;
}
