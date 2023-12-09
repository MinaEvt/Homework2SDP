#pragma once
#include "Students.h"

class Node
{               // how the elements in the linked list look like
public:
    Student student;   // hold the value of the element
    Node *next; // pointer that points to the next element

    Node(Student student);
};

class LinkedList
{
private:
    Node *head; // pointer to the first element in the list
public:
    LinkedList();

    void insertAtBeginning(Student student);//adds element with given value at the beginning of the list
    
    void print();//prints the elements in the list

    void deleteList();//deletes the list
};