#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;

    // push() - Adds an element to the top of the stack
    stk.push(10);
    stk.push(20);
    stk.push(30);

    // Displaying the stack
    cout << "Stack after pushes: ";
    stack<int> temp = stk;  // Using a temporary stack to print without modifying the original stack
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // top() - Returns the top element of the stack without removing it
    cout << "Top element of the stack: " << stk.top() << endl;

    // pop() - Removes the top element of the stack
    cout << "Popping the top element: " << stk.top() << endl;
    stk.pop();  // Removes 30
    cout << "Stack after popping: ";
    temp = stk;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // size() - Returns the number of elements in the stack
    cout << "Size of stack: " << stk.size() << endl;

    // empty() - Checks whether the stack is empty
    cout << "Is stack empty? " << (stk.empty() ? "Yes" : "No") << endl;

    // push() - Adding more elements
    stk.push(40);
    stk.push(50);

    // size() after pushing more elements
    cout << "Size of stack after pushing more elements: " << stk.size() << endl;

    // empty() after adding more elements
    cout << "Is stack empty now? " << (stk.empty() ? "Yes" : "No") << endl;

    // Final state of stack
    cout << "Final stack elements: ";
    temp = stk;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
