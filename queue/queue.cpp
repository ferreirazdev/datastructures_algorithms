#include <iostream>
#define SIZE 5

// Queue follows the First In First Out (FIFO) rule - 
// the item that goes in first is the item that comes out first.

class Queue {
    private:
        int items[SIZE], front, rear;
    
    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        bool isFull() {
            if (front == 0 && rear == SIZE - 1) {
                return true;
            }
            return false;
        }

        bool isEmpty() {
            if (front == -1) {
                return true;
            }
            return false;
        }

        void enQueue(int element) {
            if (isFull()) {
                std::cout << "Queue is full";
            } else {
                if (front == -1) front = 0;
                rear++;
                items[rear] = element;
                std::cout << std::endl << "inserted " << element << std::endl;
            }
        }

        int deQueue() {
            int element;
            if (isEmpty()) {
                std::cout << "Queue is empty" << std::endl;
                return (-1);
            } else {
                element = items[front];
                if (front >= rear) {
                    front = -1;
                    rear = -1;
                } else {
                    front++;
                }

                std::cout << std::endl << "deleted " << element << std::endl;
                return (element);
            }
        }

        void display() {
            int i;
            if (isEmpty()) {
                std::cout << std::endl << "Empty Queue" << std::endl;
            } else {
                std::cout << std::endl << "front Queue " << front << std::endl;
                std::cout << std::endl << "items Queue: " << std::endl;
                for (i = front; i <= rear; i++)
                    std::cout << std::endl << items[i] << "  " << std::endl;
                std::cout << std::endl << "rear Queue " << rear << std::endl;
            }
        }
};

int main() {
    Queue q;
    
    q.deQueue();

    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);
    q.enQueue(7);
    q.enQueue(8);
    // q.display();

    q.enQueue(9);
    q.deQueue();
    q.deQueue();

    q.display();

    return 0;
}