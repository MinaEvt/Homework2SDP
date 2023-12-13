//#include <iostream>
//#include <stdexcept>
//#include "Students.cpp" // Include the header file where Student class is defined
//
//struct Queue {
//    int front, rear, capacity;
//    Student* queue;
//
//    Queue(int c) {
//        front = rear = 0;
//        capacity = c;
//        queue = new Student[capacity]; // Allocate memory for Student objects
//    }
//
//    ~Queue() { delete[] queue; }
//
//    // function to insert a Student at the rear of the queue
//    void queueEnqueue(const Student& data) {
//        // check if the queue is full
//        if (rear == capacity) {
//            std::cout << "\nQueue is full\n";
//            return;
//        } else {
//            queue[rear] = data; // Insert Student object at the rear
//            rear++;
//        }
//    }
//
//    // function to delete a Student from the front of the queue
//    void queueDequeue() {
//        // if the queue is empty
//        if (front == rear) {
//            std::cout << "\nQueue is empty\n";
//            return;
//        } else {
//            // shift all elements from index 2 till rear to the left by one
//            for (int i = 0; i < rear - 1; i++) {
//                queue[i] = queue[i + 1];
//            }
//            rear--;
//        }
//    }
//
//    // print queue elements (Student details)
//    void queueDisplay() {
//        if (front == rear) {
//            std::cout << "\nQueue is Empty\n";
//            return;
//        }
//
//        // traverse front to rear and print Student elements
//        for (int i = front; i < rear; i++) {
//            std::cout << "Student details: " << queue[i] << " <-- ";
//        }
//    }
//
//    // print front of the queue (Student details)
//    void queueFront() {
//        if (front == rear) {
//            std::cout << "\nQueue is Empty\n";
//            return;
//        }
//        std::cout << "\nFront Element is: " << queue[front];
//    }
//};
