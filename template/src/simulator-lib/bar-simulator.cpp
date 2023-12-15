#include "bar-simulator.h"
#include "LinkedList.cpp"
#include "Vector.cpp"
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

bool noStudents(unsigned int numberStudents) {
    return numberStudents == 0;
}

bool emptySimulation(unsigned int maxBarSimulation, unsigned int maxPeopleInGroup, unsigned int numberStudents) {
    return maxBarSimulation == 0 && maxPeopleInGroup == 0 && numberStudents == 0;
}


void simulate_bar(std::istream &input, std::ostream &output) {
    unsigned int maxBarCapacity; // bar capacity
    unsigned int maxPeopleInGroup; // people in group capacity
    unsigned int numberStudents; // number of students

    unsigned int peopleInBar = 0;

    input >> maxBarCapacity >> maxPeopleInGroup >> numberStudents;

    if (emptySimulation(maxBarCapacity, maxPeopleInGroup, numberStudents)) {
        output << "";
        return;
    } else if (maxBarCapacity == 0 && numberStudents > 0 || maxBarCapacity < maxPeopleInGroup) {
        throw incorrect_simulation("No space in bar");
    } else if (noStudents(numberStudents)) {
        output << "";
        return;
    }

    vectorClass<Student> students;

    //input student
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

    //add students to vector
    while (!students.empty() || !studentList.isEmpty()) {
        while (!students.empty() && students.back().getMinutes() == currTime) {
            studentList.insertAtBeginning(students.back());
            students.pop();
        }

        //enter in bar if only one student
        if (studentList.size() == Student::MIN_STUDENTS) {
            unsigned int enthusiasm = studentList.getHead()->student.getEnthusiasm();
            unsigned int minutes = studentList.getHead()->student.getMinutes();
            unsigned int fn = studentList.getHead()->student.getFn();
            output << minutes << ' ' << fn << " enter\n";
            output << enthusiasm << ' ' << fn << " exit\n";
            return;
        }

        //groups
        while (!studentList.isEmpty() && studentList.size() > Student::MIN_STUDENTS) {
            LinkedList group;
            unsigned int groupSize = 0;

            //create group
            Node *currNode = studentList.getHead();
            Student &currStudent = currNode->student;
            group.insertAtBeginning(currStudent);
            studentList.deleteStudent(currStudent);
            groupSize++;

            if (group.isEmpty()) {
                while (groupSize <= maxPeopleInGroup && currNode->next != nullptr) {
                    Student &nextStudent = currNode->next->student;
                    if (currStudent.getMajor() == nextStudent.getMajor()) {
                        group.insertAtBeginning(nextStudent);
                        studentList.deleteStudent(nextStudent);
                        groupSize++;
                    } else {
                        nextStudent = currNode->next->student;
                    }
                }
            }

            //enter group in bar
            unsigned int spaceInBar = maxBarCapacity - peopleInBar;
            if (groupSize <= spaceInBar) {
                Node *groupNode = group.getHead();
                while (groupNode != nullptr && spaceInBar != 0 && groupSize != 0) {
                    output << groupNode->student.getMinutes() << " " << groupNode->student.getFn() << ' '
                           << "enter\n";
                    groupNode = groupNode->next;
                    groupSize--;
                    peopleInBar++;
                    spaceInBar = maxBarCapacity - peopleInBar;
                }
            } else {
                Node *groupNode = group.getHead();
                while (groupNode != nullptr) {
                    studentList.insertAtBeginning(groupNode->student);
                    groupNode = groupNode->next;
                    groupSize--;
                }
            }
        }

        //exit
        Node *currStudentNode = studentList.getHead();
        while (currStudentNode != nullptr) {
            Student &currStudent = currStudentNode->student;
            if (currStudent.getEnthusiasm() == 0) {
                output << currTime << ' ' << currStudent.getFn() << " exit\n";
                studentList.deleteStudent(currStudent);
                currStudentNode = studentList.getHead();
                peopleInBar--;
            } else {
                currStudent.decreaseEnthusiasm();
                currStudentNode = currStudentNode->next;
            }
        }
        currTime++;
    }
}