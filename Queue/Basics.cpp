#include <iostream>
using namespace std;

class Queue {
    int array[20];  // Array to store queue elements
    int front;      // Index of the front element
    int rear;       // Index of the rear element

public:
    Queue() {
        front = -1;  // Initialize front as -1 (empty queue)
        rear = -1;   // Initialize rear as -1 (empty queue)
    }

    void enqueue(int x);        // Add an element to the queue
    int dequeue();              // Remove and return an element from the queue
    int frontElement();         // Get the front element without removing it
    int rearElement();          // Get the rear element without removing it
    bool isEmpty();             // Check if the queue is empty
    bool isFull();              // Check if the queue is full
    void Print();               // Print all elements in the queue
};

// Check if the queue is empty
bool Queue::isEmpty() {
    return front == -1;  // If front is -1, queue is empty
}

// Check if the queue is full
bool Queue::isFull() {
    return rear == 19;   // Max size is 20
}

// Add an element to the queue
void Queue::enqueue(int x) {
    if (isFull()) {  // Check if the queue is full before enqueuing
        cout << "Queue Overflow! Cannot enqueue." << endl;
        return;
    }
    if (front == -1) {  // If queue is empty, initialize front
        front = 0;
    }
    rear++;
    array[rear] = x;
    cout << x << " enqueued to the queue." << endl;
}

// Remove and return an element from the queue
int Queue::dequeue() {
    if (isEmpty()) {  // Check if the queue is empty before dequeuing
        cout << "Queue Underflow! Cannot dequeue." << endl;
        return -1;
    }
    int x = array[front];
    if (front == rear) {  // If there is only one element, reset the queue
        front = rear = -1;
    } else {
        front++;
    }
    return x;
}

// Get the front element without removing it
int Queue::frontElement() {
    if (isEmpty()) {  // Check if the queue is empty before accessing front
        cout << "Queue is empty. No front element." << endl;
        return -1;
    }
    return array[front];
}

// Get the rear element without removing it
int Queue::rearElement() {
    if (isEmpty()) {  // Check if the queue is empty before accessing rear
        cout << "Queue is empty. No rear element." << endl;
        return -1;
    }
    return array[rear];
}

// Print all elements in the queue
void Queue::Print() {
    if (!isEmpty()) {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    } else {
        cout << "Empty Queue" << endl;
    }
}

// Menu-driven main function
int main() {
    Queue q;
    int choice, value;

    do {
        // Display the menu
        cout << "\nQueue Operations Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Print Queue" << endl;
        cout << "4. Get Front Element" << endl;
        cout << "5. Get Rear Element" << endl;
        cout << "6. Check if Queue is Empty" << endl;
        cout << "7. Check if Queue is Full" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Enqueue operation
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2: // Dequeue operation
                value = q.dequeue();
                if (value != -1) {
                    cout << "Dequeued: " << value << endl;
                }
                break;

            case 3: // Print queue elements
                q.Print();
                break;

            case 4: // Get front element
                value = q.frontElement();
                if (value != -1) {
                    cout << "Front element: " << value << endl;
                }
                break;

            case 5: // Get rear element
                value = q.rearElement();
                if (value != -1) {
                    cout << "Rear element: " << value << endl;
                }
                break;

            case 6: // Check if queue is empty
                if (q.isEmpty()) {
                    cout << "Queue is empty." << endl;
                } else {
                    cout << "Queue is not empty." << endl;
                }
                break;

            case 7: // Check if queue is full
                if (q.isFull()) {
                    cout << "Queue is full." << endl;
                } else {
                    cout << "Queue is not full." << endl;
                }
                break;

            case 8: // Exit
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}
