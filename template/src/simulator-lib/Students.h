#pragma once

    enum class Major {
    Fraud,
    International_Schemes,
    Creative_Nihilism,
    Subjective_Researches,
    File_Analizis,
    Micromanagmest,
    Applied_Materialization,
    Subjectivistics,
    Magnetism_and_Clearing,
    Invalid_Major
};

class Student {
private:
    unsigned int fn;      // faculty number with 9 digits
    unsigned int minutes; // when arrived
    Major major;
    unsigned int enthusiasm; // stay duration in minutes

public:
    static bool isValidFn(unsigned int fn);

    static bool isValidMajor(Major major);

    Student();

    unsigned int getFn() const;

    Major getMajor() const;

    unsigned int getMinutes() const;

    unsigned int getEnthusiasm() const;

    Student(unsigned int fn, unsigned int minutes, Major major, unsigned int enthusiasm);

    friend std::ostream &operator<<(std::ostream &os, const Student &student);

    static int majorToInt(Major m);

    void decreaseEnthusiasm();
};
