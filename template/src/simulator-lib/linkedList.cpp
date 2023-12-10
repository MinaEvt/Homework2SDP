#include "linkedList.h"
#include <iostream>
#include <ostream>

Node::Node(Student student) : student(student), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

void LinkedList::insertAtBeginning(Student student)
{
    Node *newNode = new Node(student);
    newNode->next = head;
    head = newNode;
}

void LinkedList::print()
{
    Node *curr = head;
    while (curr != nullptr)
    {
        std::cout << curr->student.getFn() << ' ' << curr->student.getMinutes()
                  << ' ' << curr->student.majorToString(curr->student.getMajor()) << ' ' << curr->student.getEnthusiasm() << " -> ";
        curr = curr->next;
    }
    std::cout << "" << std::endl;
}

void LinkedList::deleteList()
{
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *temp = curr;
        curr = curr->next;
        delete temp;
    }
    head = nullptr;
}

void LinkedList::addToSameMajorGroup(Student student)
{
    Node *newNode = new Node(student);

}

