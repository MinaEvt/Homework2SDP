#include "bar-simulator.h"
#include "linkedList.cpp"


///
/// @brief Simulate the student bar problem
///
/// @param input
///   The stream, which contains the simulation commands
/// @param output
///   The stream, where the steps of simulation have to be printed.
///

bool isValidStudent(Student student)
{
    return (Student::isValidFn(student.getFn()) && Student::isValidMajor(student.getMajor()));
}

void simulate_bar(std::istream &input, std::ostream &output)
{
    LinkedList studentList;

    unsigned int K; // bar capacity
    unsigned int G; // people in group capacity
    unsigned int N; // row number with information on the student

    //input >> "Enter the bar capacity: " >> K >> "Enter the people capacity in a group: " >> G >> "Enter the number of students: " >> N;

    input >> K >> G >> N;
    for (size_t i = 0; i < N; i++)
    {
        unsigned int fn;
        unsigned int minutes, enthusiasm;
        int majorIndex; // Int the index in the enum for the major

        // input >> "faculty number: " >> fn >> "Arriival time: " >> minutes >> "Enter major in university: " >> majorIndex >> "Enther enthusiasm: " >> enthusiasm;
        input >> fn >> minutes >> majorIndex >> enthusiasm;

        Major major = static_cast<Major>(majorIndex); // casting the majorIndex to major

        Student newStudent(fn, minutes, major, enthusiasm); // create new student
        if (!isValidStudent(newStudent))                     // check if the student is valid
            throw std::exception();
        else {
            studentList.insertAtBeginning(newStudent); // add the student to the list
        }

        studentList.print();
    }

    //throw std::exception();
}