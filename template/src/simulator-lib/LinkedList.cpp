#include "LinkedList.h"
#include <iostream>
#include <ostream>

Node::Node(Student student) : student(student), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::insertAtBeginning(Student student) {
    Node *newNode = new Node(student);
    newNode->next = head;
    head = newNode;
}

void LinkedList::print() {
    Node *curr = head;
    while (curr != nullptr) {
        std::cout << curr->student.getFn() << ' ' << curr->student.getMinutes()
                  << ' ' << Student::majorToInt(curr->student.getMajor()) << ' '
                  << curr->student.getEnthusiasm() << " -> ";
        curr = curr->next;
    }
    std::cout << "" << std::endl;
}

int LinkedList::size() const {
    int count = 0;
    Node *curr = head;
    while (curr != nullptr) {
        count++;
        curr = curr->next;
    }
    return count;
}

void LinkedList::removeFirst() {
    if (head != nullptr) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

Node *LinkedList::getHead() const {
    return head;
}

LinkedList::~LinkedList() {
    Node *curr = head;
    while (curr != nullptr) {
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
}

void LinkedList::deleteStudent(Student student) {
    Node *curr = head;
    Node *prev = nullptr;
    if (curr != nullptr && curr->student.getFn() == student.getFn()) {
        head = curr->next;
        delete curr;
        return;
    }

    while (curr != nullptr && curr->student.getFn() != student.getFn()) {
        prev = curr;
        curr = curr->next;
    }

    if (curr == nullptr) {
        return;
    }

    if (prev != nullptr) {
        prev->next = curr->next;
    } else {
        head = curr->next;
    }
    delete curr;
}

