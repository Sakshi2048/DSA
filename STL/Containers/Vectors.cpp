#include <iostream>
#include <vector>
using namespace std;

void displayVector(vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " "; 
    }
    cout << endl; 
}

int main() {
    // 1. Declaration
    vector<int> vec; 
 
    // 2. Declaration and Initialization
    vector<int> vec1 = {10, 20, 30, 40, 50}; 
    
    vector<int> vec2(5, 100); // Initializes with 5 elements, each set to 100
    
    cout << "vec1 initialized with: ";
    displayVector(vec1);
    cout << "vec2 initialized with: ";
    displayVector(vec2);

    cout << "Size of vec1: " << vec1.size() << endl; 
    cout << "Capacity of vec1: " << vec1.capacity() << endl; 
    
    // Accessing Elements
    cout << "First element of vec1: " << vec1.front() << endl; 
    cout << "Last element of vec1: " << vec1.back() << endl; 
    
    cout << "Element at index 2 in vec1: " << vec1.at(2) << endl; 

    // Updating Elements
    vec1[1] = 25; 
    cout << "After updating index 1, vec1: ";
    displayVector(vec1);


    // Inserting Elements
    vec1.insert(vec1.begin() + 2, 99);
    cout << "After inserting 99 at index 2, vec1: ";
    displayVector(vec1);

    // Deleting Elements
    vec1.erase(vec1.begin() + 2); // Remove the element at the third position
    cout << "After deleting element at index 2, vec1: ";
    displayVector(vec1);

    //Other Common Operations
    vec1.push_back(60); // Add an element to the end
    cout << "After push_back(60), vec1: ";
    displayVector(vec1);

    vec1.pop_back(); // Remove the last element
    cout << "After pop_back(), vec1: ";
    displayVector(vec1);

    vec1.clear(); // Remove all elements from the vector
    cout << "After clear(), vec1 size: " << vec1.size() << endl;

    // 2D Vectors
    vector<vector<int>> vec2D = {
        {1, 2, 3}, // First row
        {4, 5, 6}, // Second row
        {7, 8, 9}  // Third row
    };
    
    cout<<endl;
    cout << "2D Vector:" << endl;
    for (int i = 0; i < vec2D.size(); ++i) {
        for (int j = 0; j < vec2D[i].size(); ++j) {
            cout << vec2D[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}