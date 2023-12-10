#pragma once

enum class Major
{
    Fraud,
    International_Schemes,
    Creative_Nihilism,
    Subjective_Researches,
    File_Analizis,
    Micromanagmest,
    Applied_Materialization,
    Subjectivistics,
    Magnetism_and_Clearing
};

class Student
{
private:
    unsigned int fn;      // faculty number with 9 digits
    unsigned int minutes; // when arrived
    Major major;
    unsigned int enthusiasm; // stay duration in minutes

public:
    static bool isValidFn(int fn);

    static bool isValidMajor(Major major);

    Student();

    int getFn() const;

    Major getMajor() const;

    int getMinutes() const;

    int getEnthusiasm() const;

    Student(int fn, int minutes, Major major, int enthusiasm);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);

    static std::string majorToString(Major m) ;
};
