
#include <iostream>
using namespace std;

#define MAX_SIZE 100

struct Node {
    int data;
    int priority;
};

class PriorityQueue {
private:
    Node arr[MAX_SIZE];
    int front, rear;

public:
    PriorityQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    void enqueue(int data, int priority) {
        Node newNode;
        newNode.data = data;
        newNode.priority = priority;

        if (isFull()) {
            cout << "Priority queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
            arr[rear] = newNode;
        } else {
            int i;
            for (i = rear; i >= front; i--) {
                if (newNode.priority >= arr[i].priority)
                    arr[i + 1] = arr[i];
                else
                    break;
            }
            arr[i + 1] = newNode;
            rear++;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority queue is empty. Cannot dequeue." << endl;
            return;
        }

        cout << "Dequeued element: " << arr[front].data << " with priority " << arr[front].priority << endl;

        if (front == rear)
            front = rear = -1;
        else
            front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Priority queue is empty." << endl;
            return;
        }

        cout << "Priority queue:" << endl;
        for (int i = front; i <= rear; i++) {
            cout << "Element: " << arr[i].data << " Priority: " << arr[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 3);

    cout << "After insertion:" << endl;
    pq.display();

    pq.dequeue();

    cout << "After deletion:" << endl;
    pq.display();

    return 0;
}
