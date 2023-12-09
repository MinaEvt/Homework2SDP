#include "Students.h"
#include <iostream>
#include <string>
#include <ostream>

// Student::Student() : fn(0), minutes(0), major(), enthusiasm(0) {}

int Student::getFn() const
{
    return this->fn;
}

Major Student::getMajor() const
{
    return this->major;
}

int Student::getMinutes() const
{
    return this->minutes;
}

int Student::getEnthusiasm() const
{
    return this->enthusiasm;
}

Student::Student(int fn, int minutes, Major major, int enthusiasm)
{
    this->fn = fn;
    this->minutes = minutes;
    this->major = major;
    this->enthusiasm = enthusiasm;
}

std::string Student::majorToString(Major m) const
{
    switch (m)
    {
    case Major::Fraud:
        return "Fraud";
    case Major::International_Schemes:
        return "International Schemes";
    case Major::Creative_Nihilism:
        return "Creative Nihilism";
    case Major::Subjective_Researches:
        return "Subjective Researches";
    case Major::File_Analizis:
        return "File_Analizis";
    case Major::Micromanagmest:
        return "Micromanagmest";
    case Major::Applied_Materialization:
        return "Applied Materialization";
    case Major::Subjectivistics:
        return "Subjectivistics";
    case Major::Magnetism_and_Clearing:
        return "Magnetism and Clearing";
        break;

    default:
        break;
    }
}

bool Student::isValidFn(int fn)
{
    std::string str = std::to_string(fn);
    int digitNumber = str.length();
    if (digitNumber == 9)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Student::isValidMajor(Major major)
{
    int m = static_cast<int>(major);
    if (m >= 0 && m <= 8)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::ostream &operator<<(std::ostream &os, const Student &student)
{
    os << "Student details: " << student.getFn() << student.getMinutes() << student.majorToString(student.getMajor()) << student.getEnthusiasm(); // Customize this based on your Student class members
    return os;
}
