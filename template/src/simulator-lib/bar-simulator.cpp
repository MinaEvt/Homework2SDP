#include "bar-simulator.h"
#include "LinkedList.cpp"
#include "vector.cpp"
#include <string>


///
/// @brief Simulate the student bar problem
///
/// @param input
///   The stream, which contains the simulation commands
/// @param output
///   The stream, where the steps of simulation have to be printed.
///
Major stringToInt(std::string &majorStr) {
    if (majorStr == "Fraud") {
        return Major::Fraud;
    } else if (majorStr == "International Schemes") {
        return Major::International_Schemes;
    } else if (majorStr == "Creative Nihilism") {
        return Major::Creative_Nihilism;
    } else if (majorStr == "Subjective Researches") {
        return Major::Subjective_Researches;
    } else if (majorStr == "File Analizis") {
        return Major::File_Analizis;
    } else if (majorStr == "Micromanagmest") {
        return Major::Micromanagmest;
    } else if (majorStr == "Applied Materialization") {
        return Major::Applied_Materialization;
    } else if (majorStr == "Subjectivistics") {
        return Major::Subjectivistics;
    } else if (majorStr == "Magnetism and Clearing") {
        return Major::Magnetism_and_Clearing;
    } else {
        return Major::Invalid_Major;
    }
}

bool isValidStudent(Student student) {
    return (Student::isValidFn(student.getFn()) && Student::isValidMajor(student.getMajor()));
}

bool noStudents(unsigned int numberStudents){
    return numberStudents == 0;
}

bool emptySimulation(unsigned int maxBarSimulation, unsigned int maxPeopleInGroup, unsigned int numberStudents){
    return maxBarSimulation == 0 && maxPeopleInGroup == 0 && numberStudents == 0;
}


void simulate_bar(std::istream &input, std::ostream &output) {
    unsigned int maxBarCapacity; // bar capacity
    unsigned int maxPeopleInGroup; // people in group capacity
    unsigned int numberStudents; // number of students

    input >> maxBarCapacity >> maxPeopleInGroup >> numberStudents;

    if(emptySimulation(maxBarCapacity, maxPeopleInGroup, numberStudents)){
        output << "";
        return;
    } else if (noStudents(numberStudents)){
        output << "";
        return;
    } else if (maxBarCapacity == 0 || maxBarCapacity < maxPeopleInGroup) {
        throw incorrect_simulation("No space in bar");
    }

    vectorClass<Student> students;

    for (size_t i = 0; i < numberStudents; i++) {
        unsigned int fn;
        unsigned int minutes, enthusiasm;
        std::string majorStr;
        Major major; // Int the index in the enum for the major

        input >> fn >> minutes >> majorStr >> enthusiasm;

        major = stringToInt(majorStr);
        Student newStudent(fn, minutes, major, enthusiasm);

        if (!isValidStudent(newStudent))
            throw std::exception();

        students.push(newStudent);

    }

    LinkedList studentList;
    unsigned int currTime = 0;

    //new students arrival
    while (!students.empty() || !studentList.isEmpty()) {
        while (!students.empty() && students.back().getMinutes() == currTime) {
            studentList.insertAtBeginning(students.back());
            students.pop();
        }

        //Students in the club
        if (!studentList.isEmpty()) {
            auto currStudentNode = studentList.getHead();
            while (currStudentNode != nullptr) {
                auto &currStudent = currStudentNode->student;
                if (currStudent.getEnthusiasm() == 0) {
                    output << currTime << ' ' << currStudent.getFn() << "exit\n";
                    studentList.deleteStudent(currStudent);
                    break;
                } else {
                    currStudent.decreaseEnthusiasm();
                }
                currStudentNode = currStudentNode->next;
            }
        }

        //groups
        while (!studentList.isEmpty()) {
            LinkedList group;
            unsigned int groupSize = 0;

            auto currNode = studentList.getHead();
            while (currNode != nullptr && groupSize < maxPeopleInGroup) {
                auto &currStudent = currNode->student;
                if (currStudent.getMajor() == studentList.getHead()->student.getMajor()) {
                    group.insertAtBeginning(currStudent);
                    studentList.deleteStudent(currStudent);
                }
                currNode = currNode->next;
                groupSize++;
            }

            if (groupSize == maxPeopleInGroup) {
                auto groupNode = group.getHead();
                while (groupNode != nullptr) {
                    output << currTime << " " << groupNode->student.getFn() << "enter\n";
                    groupNode = groupNode->next;
                }
            } else {
                auto groupNode = group.getHead();
                while (groupNode != nullptr) {
                    studentList.insertAtBeginning(groupNode->student);
                    groupNode = groupNode->next;
                }
                break;
            }
        }
        currTime++;

    }
    //throw std::exception();
}