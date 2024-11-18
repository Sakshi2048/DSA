#include <iostream>
#include <queue>
using namespace std;

class Stack {
    queue<int> q1;
    queue<int> q2;

public:
    // Push operation
    void push(int x) {

        // Transfer all elements from q1 to q2
        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(x);

        // Transfer the elements back to q1 to maintain stack order
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty, cannot pop!" << endl;
            return -1;  // Error code
        }

        // Remove the front element of q1, which is the top of the stack
        int topElement = q1.front();
        q1.pop();
        return topElement;
    }

    // Get the top element of the stack
    int topElement() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;  
        }
        return q1.front();
    }

    // Check if the stack is empty
    bool isEmpty() {
        return q1.empty();
    }

    // Print the elements of the stack
    void Print() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }

        cout << "Stack elements: ";
        queue<int> tempQueue = q1;  // Use a temporary queue to print the elements
        while (!tempQueue.empty()) {
            cout << tempQueue.front() << " ";
            tempQueue.pop();
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    int choice, value;

    do {
        // Display the menu
        cout << "\nMenu:" << endl;
        cout << "1. Push an element" << endl;
        cout << "2. Pop an element" << endl;
        cout << "3. Get top element" << endl;
        cout << "4. Check if stack is empty" << endl;
        cout << "5. Print stack" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Push an element
                cout << "Enter element to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2:
                // Pop an element
                cout << "Popped element: " << s.pop() << endl;
                break;

            case 3:
                // Get top element
                cout << "Top element: " << s.topElement() << endl;
                break;

            case 4:
                // Check if stack is empty
                if (s.isEmpty()) {
                    cout << "Stack is empty!" << endl;
                } else {
                    cout << "Stack is not empty!" << endl;
                }
                break;

            case 5:
                // Print stack
                s.Print();
                break;

            case 6:
                // Exit
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}
