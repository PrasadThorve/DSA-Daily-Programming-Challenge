// Queue - 
#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    // Constructor to initialize the queue
    Queue() : front(nullptr), rear(nullptr) {}

    // Destructor to free dynamically allocated memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }

    // Function to check if the queue is empty
    bool isEmpty() const {
        return front == nullptr;
    }

    // Function to add an element to the rear of the queue
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Function to remove the front element from the queue
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == nullptr) {
            rear = nullptr; // Set rear to null if the queue becomes empty
        }
    }

    // Function to get the front element of the queue
    int getFront() const {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            throw std::runtime_error("Queue is empty.");
        }

        return front->data;
    }

    // Function to get the rear element of the queue
    int getRear() const {
        if (isEmpty()) {
            std::cout << "Queue is empty." << std::endl;
            throw std::runtime_error("Queue is empty.");
        }

        return rear->data;
    }
};

int main() {
    // Example usage of the queue
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    std::cout << "Front: " << queue.getFront() << std::endl;
    std::cout << "Rear: " << queue.getRear() << std::endl;

    queue.dequeue();

    std::cout << "Front: " << queue.getFront() << std::endl;
    std::cout << "Rear: " << queue.getRear() << std::endl;

    return 0;
}