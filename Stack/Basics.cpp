#include <iostream>
using namespace std;

class Stack {
    int array[20]; // Array to store stack elements
    int top;       // Index of the top element

public:
    Stack() {
        top = -1; // Initialize stack as empty
    }

    void push(int x);      // Push an element onto the stack
    int pop();             // Pop an element from the stack
    int topElement();      // Get the top element without removing it
    bool isEmpty();        // Check if the stack is empty
    bool isFull();         // Check if the stack is full
    void Print();          // Print all elements in the stack
};

// Check if the stack is empty
bool Stack::isEmpty() {
    return top == -1;
}

// Check if the stack is full
bool Stack::isFull() {
    return top == 19; // Max size is 20
}

// Push an element onto the stack
void Stack::push(int x) {
    if (isFull()) {
        cout << "Stack Overflow! Cannot push " << x << "." << endl;
        return;
    }
    top++;
    array[top] = x;
    cout << x << " pushed onto the stack." << endl;
}

// Pop an element from the stack
int Stack::pop() {
    if (isEmpty()) {
        cout << "Stack Underflow! Cannot pop." << endl;
        return -1;
    }
    int x = array[top];
    top--;
    return x;
}

// Get the top element without removing it
int Stack::topElement() {
    if (isEmpty()) {
        cout << "Stack is empty." << endl;
        return -1;  // Return -1 when the stack is empty
    }
    return array[top];
}

// Print all elements in the stack
void Stack::Print() {
    if (!isEmpty()) {
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Empty Stack" << endl;
    }
}

// Menu-driven main function
int main() {
    Stack s;
    int choice, value;

    do {
        // Display the menu
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Print Stack" << endl;
        cout << "4. Get Top Element" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Push operation
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;

            case 2: // Pop operation
                value = s.pop();
                if (value != -1) {
                    cout << "Popped: " << value << endl;
                }
                break;

            case 3: // Print stack elements
                s.Print();
                break;

            case 4: // Get top element without removing it
                value = s.topElement();
                if (value != -1) {
                    cout << "Top element: " << value << endl;
                }
                break;

            case 5: // Exit
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
