#include <iostream>
#include <list>
using namespace std;

void showlist(list<int>& g) {
    for (int value : g) { 
        cout << value << " "; 
    }
    cout << endl; 
}

int main() {
    // Declaration
    list<int> l1, l2;

    // Adding elements in both lists
    for (int i = 0; i < 5; i++) {
        l1.push_back(i * 2);  
        l2.push_front(i * 3); 
    }

    // Display lists
    cout << "\nList 1 (l1) is : ";
    showlist(l1);

    cout << "\nList 2 (l2) is : ";
    showlist(l2);

    // Display first and last elements of l1
    cout << "\nl1.front() - first element : " << l1.front() << endl;
    cout << "l1.back() - last element : " << l1.back() << endl;

    // Remove and display the first element of l1
    cout << "\nAfter l1.pop_front() : ";
    l1.pop_front();
    showlist(l1);
    
    // Remove and display the last element of l2
    cout << "\nl2.pop_back() : ";
    l2.pop_back();
    showlist(l2);

    // Reverse and display l1
    cout << "\nl1.reverse() : ";
    l1.reverse();
    showlist(l1);

    // Sort and display l2
    cout << "\nl2.sort() : ";
    l2.sort();
    showlist(l2);

    return 0;
}
