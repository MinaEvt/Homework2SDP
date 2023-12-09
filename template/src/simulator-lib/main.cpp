#include <iostream>
#include "Students.cpp"
#include "linkedList.cpp"


int main()
{
    // Create a linked list
    LinkedList studentList;

    // Adding students to the list
    Student student1(123456789, 240, Major::Fraud, 7);
    Student student2(987654321, 180, Major::Creative_Nihilism, 6);
    Student student3(111222333, 300, Major::File_Analizis, 8);

    studentList.insertAtBeginning(student1);
    studentList.insertAtBeginning(student2);
    studentList.insertAtBeginning(student3);

    // Print the list of students
    std::cout << "List of Students:" << std::endl;
    studentList.print();

    // Deleting the list (freeing memory)
    studentList.deleteList();
    return 0;
}
