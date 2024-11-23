#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

// Helper function to print a vector
void print_vector(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Main function to demonstrate non-manipulative algorithms
int main()
{
    vector<int> v = {1, 3, 7, 2, 5};

    cout << "Vector: ";

    print_vector(v);

    cout << endl;

    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;

    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;

    cout << "Sum of elements: " << accumulate(v.begin(), v.end(), 0) << endl;

    cout << "Count of 2: " << count(v.begin(), v.end(), 2) << endl;

    auto it = find(v.begin(), v.end(), 3);
    if (it != v.end())
    {
        cout << "Found 3 at index: " << distance(v.begin(), it) << endl;
    }
    else
    {
        cout << "3 not found" << endl;
    }

    cout << "vector is sorted: " << (is_sorted(v.begin(), v.end()) ? "Yes" : "No") << endl;

    return 0;
}