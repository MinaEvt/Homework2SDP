#include "Students.h"
#include <iostream>
#include <string>
#include <ostream>

Student::Student() : fn(0), minutes(0), major(), enthusiasm(0) {}

unsigned int Student::getFn() const {
    return this->fn;
}

Major Student::getMajor() const {
    return this->major;
}

unsigned int Student::getMinutes() const {
    return this->minutes;
}

unsigned int Student::getEnthusiasm() const {
    return this->enthusiasm;
}

Student::Student(unsigned int fn, unsigned int minutes, Major major, unsigned int enthusiasm) {
    this->fn = fn;
    this->minutes = minutes;
    this->major = major;
    this->enthusiasm = enthusiasm;
}

int Student::majorToInt(Major m) {
    switch (m) {
        case Major::Fraud:
            return 0;
        case Major::International_Schemes:
            return 1;
        case Major::Creative_Nihilism:
            return 2;
        case Major::Subjective_Researches:
            return 3;
        case Major::File_Analizis:
            return 4;
        case Major::Micromanagmest:
            return 5;
        case Major::Applied_Materialization:
            return 6;
        case Major::Subjectivistics:
            return 7;
        case Major::Magnetism_and_Clearing:
            return 8;


        default:
            throw std::exception();

    }
}

bool Student::isValidFn(unsigned int fn) {
    std::string str = std::to_string(fn);
    int digitNumber;
    digitNumber = str.length();
    if (digitNumber <= 9) {
        return true;
    } else {
        return false;
    }
}

bool Student::isValidMajor(Major major) {
    int m = static_cast<int>(major);
    if (m >= 0 && m <= 8) {
        return true;
    } else {
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Student &student) {
    os << "Student details: " << student.getFn() << student.getMinutes() << Student::majorToInt(student.getMajor())
       << student.getEnthusiasm(); // Customize this based on your Student class members
    return os;
}

void Student::decreaseEnthusiasm() {
    if (enthusiasm > 0) {
        enthusiasm--;
    }
}
