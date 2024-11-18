#include <iostream>
#include <stack>
using namespace std;

class Queue {
    stack<int> s1;
    stack<int> s2;

public:
    // Enqueue operation (push into s1)
    void enqueue(int x) {
        s1.push(x);
    }

    // Dequeue operation (pop from s2, if empty transfer from s1)
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue!" << endl;
            return -1;  // Error code
        }

        // If s2 is empty, transfer elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        // Pop the top element from s2
        int frontElement = s2.top();
        s2.pop();
        return frontElement;
    }

    // Get the front element of the queue
    int front() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;  // Error code
        }

        // If s2 is empty, transfer elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    // Check if the queue is empty
    bool isEmpty() {
        return s1.empty() && s2.empty();
    }

    // Print the queue elements (for demonstration)
    void print() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }

        cout << "Queue elements: ";
        stack<int> tempStack = s2;

        // Print elements in s2 (in correct order)
        while (!tempStack.empty()) {
            cout << tempStack.top() << " ";
            tempStack.pop();
        }

        // Reverse print the elements from s1 (in reverse order)
        tempStack = s1;
        while (!tempStack.empty()) {
            cout << tempStack.top() << " ";
            tempStack.pop();
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    do {
        // Display the menu
        cout << "\nMenu:" << endl;
        cout << "1. Enqueue (insert element)" << endl;
        cout << "2. Dequeue (remove element)" << endl;
        cout << "3. Front element" << endl;
        cout << "4. Check if queue is empty" << endl;
        cout << "5. Print queue" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                // Enqueue an element
                cout << "Enter element to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                // Dequeue an element
                cout << "Dequeued element: " << q.dequeue() << endl;
                break;

            case 3:
                // Get front element
                cout << "Front element: " << q.front() << endl;
                break;

            case 4:
                // Check if queue is empty
                if (q.isEmpty()) {
                    cout << "Queue is empty!" << endl;
                } else {
                    cout << "Queue is not empty!" << endl;
                }
                break;

            case 5:
                // Print the queue
                q.print();
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
