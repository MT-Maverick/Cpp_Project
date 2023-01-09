#include <iostream>

const int MAX_SIZE = 100;

class Queue {
private:
  int arr[MAX_SIZE];
  int front;
  int rear;

public:
  Queue() {
    front = -1;
    rear = -1;
  }

  bool isEmpty() {
    return (front == -1 && rear == -1);
  }

  bool isFull() {
    return (rear+1)%MAX_SIZE == front ? true : false;
  }

  void enqueue(int value) {
    if (isFull()) {
      std::cout << "Queue is full" << std::endl;
      return;
    }
    else if (isEmpty()) {
      front = rear = 0;
    }
    else {
      rear = (rear+1)%MAX_SIZE;
    }
    arr[rear] = value;
  }

  int dequeue() {
    if (isEmpty()) {
      std::cout << "Queue is empty" << std::endl;
      return -1;
    }
    else if (front == rear) {
      int temp = arr[front];
      front = -1;
      rear = -1;
      return temp;
    }
    else {
      int temp = arr[front];
      front = (front+1)%MAX_SIZE;
      return temp;
    }
  }

  int frontElement() {
    if (isEmpty()) {
      std::cout << "Queue is empty" << std::endl;
      return -1;
    }
    return arr[front];
  }
};

int main() {
  Queue q;

  // Add elements to the queue
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);

  // Print the front element of the queue
  std::cout << "Front element: " << q.frontElement() << std::endl;

  // Remove the front element of the queue
  q.dequeue();

  // Print the front element again
  std::cout << "Front element after dequeue(): " << q.frontElement() << std::endl;

  return 0;
}
