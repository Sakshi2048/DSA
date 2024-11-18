#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // push() - Adds an element to the back of the queue
    q.push(10);
    q.push(20);
    q.push(30);

    // Displaying the queue
    cout << "Queue after pushes: ";
    queue<int> temp = q;  // Using a temporary queue to print without modifying the original queue
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // front() - Returns the front element of the queue without removing it
    cout << "Front element of the queue: " << q.front() << endl;

    // back() - Returns the back element of the queue without removing it
    cout << "Back element of the queue: " << q.back() << endl;

    // pop() - Removes the front element of the queue
    cout << "Popping the front element: " << q.front() << endl;
    q.pop();  // Removes 10
    cout << "Queue after popping: ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // size() - Returns the number of elements in the queue
    cout << "Size of queue: " << q.size() << endl;

    // empty() - Checks whether the queue is empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    // push() - Adding more elements
    q.push(40);
    q.push(50);

    // size() after pushing more elements
    cout << "Size of queue after pushing more elements: " << q.size() << endl;

    // empty() after adding more elements
    cout << "Is queue empty now? " << (q.empty() ? "Yes" : "No") << endl;

    // Final state of queue
    cout << "Final queue elements: ";
    temp = q;
    while (!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    return 0;
}
