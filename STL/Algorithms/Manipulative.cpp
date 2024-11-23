#include <iostream>
#include <vector>
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

// Main function to demonstrate manipulative algorithms
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    cout << "Original Vector: ";
    print_vector(v);
    cout << endl;

    // Copy
    vector<int> v_copy(v.size());
    copy(v.begin(), v.end(), v_copy.begin());
    cout << "Copy: ";
    print_vector(v_copy);

    // Fill
    fill(v.begin(), v.end(), 42);
    cout << "Fill with 42: ";
    print_vector(v);

    // Restore the original vector for further operations
    v = {1, 2, 3, 4, 5};

    // Transform
    vector<int> v_transformed(v.size());
    transform(v.begin(), v.end(), v_transformed.begin(), [](int x)
              { return x * 2; });
    cout << "Transform (multiply by 2): ";
    print_vector(v_transformed);

    // Replace
    replace(v.begin(), v.end(), 3, 99);
    cout << "Replace 3 with 99: ";
    print_vector(v);

    // Reverse
    reverse(v.begin(), v.end());
    cout << "Reverse: ";
    print_vector(v);

    // Rotate
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "Rotate (start from 3rd element): ";
    print_vector(v);

    // Unique
    v = {1, 1, 2, 2, 3, 3, 4, 4};
    cout<<endl;
    cout<<"Vector2 = ";
    print_vector(v);
    auto it = unique(v.begin(), v.end());
    v.erase(it, v.end());
    cout << "Unique (remove consecutive duplicates): ";
    print_vector(v);

    return 0;
}
