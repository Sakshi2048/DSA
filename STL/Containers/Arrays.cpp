#include <iostream>
#include <array>

using namespace std;


int main() {
    // Declare and initialize an array
    array<int, 5> arr = {1, 2, 3, 4, 5};
    
    //Print Array
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    // [ ] Operator
    cout << "arr[2] = " << arr[2] << "\n";

    // front() and back() functions
    cout << "Front element: " << arr.front() << "\n";
    cout << "Back element: " << arr.back() << "\n";

    // swap() function
    array<int, 5> arr2 = {10, 20, 30, 40, 50};
    arr.swap(arr2); 
    cout << "After swapping arr2 in arr1, Array1 will be: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // empty() function
    cout << "Is arr empty? " << (arr.empty() ? "Yes" : "No") << "\n";

    // at() function
    cout << "Using at(): arr.at(3) = " << arr.at(3) << "\n";

    // fill() function
    arr.fill(100); // Fill the array with 100
    cout << "After fill(): ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // size() and max_size() functions
    cout << "Size of arr: " << arr.size() << "\n";

    cout << "Max size of arr: " << arr.max_size() << "\n";

    // sizeof() function
    cout << "Size of arr in bytes: " << sizeof(arr) << "\n";

    // data() function
    int* p = arr.data();
    cout << "Accessing elements using data(): ";
    for (int i = 0; i < arr.size(); i++) {
        cout << *(p + i) << " ";
    }
    cout << "\n";

    // cbegin() and cend() functions

    // here it points to address of an element in an array
    cout << "Elements using cbegin() and cend(): ";
    for (auto it = arr.cbegin(); it != arr.cend(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
