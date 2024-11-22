#include <stack>
#include <iostream>
using namespace std;


/*
Question 
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:
--------------------------------
MinStack() initializes the stack object.
void push(int val) pushes the element val onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

*/

class MinStack {
public:
    stack <pair<int, int>> stk;  // Stack to store (value, minimum_value_up_to_this_point)

    MinStack() {
        // Constructor is already implicit, no changes needed.
    }
    
    // Push a value onto the stack.
    void push(int val) {
        int m;
        // If the stack is empty, the minimum value is the value itself.
        if (stk.empty()) {
            m = val;
        } else {
            // Otherwise, the minimum is the lesser of the current value and the current minimum.
            m = min(val, stk.top().second);
        }
        // Push the pair (val, min) onto the stack.
        stk.push({val, m});
    }
    
    // Pop the top element from the stack.
    void pop() {
        if (!stk.empty()) {
            stk.pop();
        }
    }
    
    // Get the top value of the stack.
    int top() {
        if (!stk.empty()) {
            return stk.top().first;
        }
        return -1;  // Return an invalid value if the stack is empty.
    }
    
    // Get the minimum value from the stack.
    int getMin() {
        if (!stk.empty()) {
            return stk.top().second;
        }
        return -1;  // Return an invalid value if the stack is empty.
    }
};

int main() {
    MinStack* obj = new MinStack();
    int choice, val;
    
    while (true) {
        // Display menu
        cout << "\nMenu: \n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Get Min\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> val;
                obj->push(val);
                cout << "Value pushed: " << val << endl;
                break;
            case 2:
                obj->pop();
                cout << "Top value popped." << endl;
                break;
            case 3:
                cout << "Top element: " << obj->top() << endl;
                break;
            case 4:
                cout << "Minimum element: " << obj->getMin() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                delete obj;  // Free memory before exit
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}
