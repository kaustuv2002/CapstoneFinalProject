/*
 * File: Enrollment.h
 * Author: Kaustuv
 * Project: Academic Information and Management System
 * Purpose: Declares an encapsulated enrollment and grade record.
 * Language: C++17
 */
#pragma once
#include <string>
// ENCAPSULATION: enrollment state is private; callers use accessors and grade behavior.
class Enrollment {
    int studentId_ = 0;
    std::string courseCode_, term_, grade_, status_;
public:
    Enrollment() = default; // Used by validated file loading.
    Enrollment(int studentId, std::string courseCode, std::string term,
               std::string grade, std::string status);
    int studentId() const { return studentId_; }
    const std::string& courseCode() const { return courseCode_; }
    const std::string& term() const { return term_; }
    const std::string& grade() const { return grade_; }
    const std::string& status() const { return status_; }
    void setStudentId(int value) { studentId_ = value; }
    void setCourseCode(std::string value);
    void setTerm(std::string value);
    void setGrade(std::string value);
    void setStatus(std::string value);
    // Keeps the grade and enrollment status consistent when entering or clearing a grade.
    void updateGrade(std::string value);
};
