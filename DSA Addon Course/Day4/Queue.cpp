// Queue using Array 


#include <iostream>

class Queue
{
private:
    int *arr;
    int front;
    int rear;
    int capacity;
    int size;

public:
    Queue(int capacity) : front(-1), rear(-1), capacity(capacity), size(0)
    {
        arr = new int[capacity];
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isEmpty() const
    {
        return size == 0;
    }

    bool isFull() const
    {
        return size == capacity;
    }

    int getSize() const
    {
        return size;
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            std::cout << "Queue is full. Cannot enqueue." << std::endl;
            return;
        }

        if (isEmpty())
        {
            front = 0;
        }

        rear = (rear + 1);
        arr[rear] = data;
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }

        front = (front + 1);
        size--;

        if (isEmpty())
        {
            front = -1;
            rear = -1;
        }
    }

    int getFront() const
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty." << std::endl;
            throw std::runtime_error("Queue is empty.");
        }
        return arr[front];
    }

    int getRear() const
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty." << std::endl;
            throw std::runtime_error("Queue is empty.");
        }
        return arr[rear];
    }
};

int main()
{
    Queue queue(5);

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