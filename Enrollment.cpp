/*
 * File: Enrollment.cpp
 * Author: Kaustuv
 * Project: Academic Information and Management System
 * Purpose: Implements enrollment accessors and coordinated grade changes.
 * Language: C++17
 */
#include "Enrollment.h"
#include <utility>
Enrollment::Enrollment(int studentId, std::string courseCode, std::string term,
                       std::string grade, std::string status)
    : studentId_(studentId), courseCode_(std::move(courseCode)),
      term_(std::move(term)), grade_(std::move(grade)), status_(std::move(status)) {}
void Enrollment::setCourseCode(std::string value) { courseCode_ = std::move(value); }
void Enrollment::setTerm(std::string value) { term_ = std::move(value); }
void Enrollment::setGrade(std::string value) { grade_ = std::move(value); }
void Enrollment::setStatus(std::string value) { status_ = std::move(value); }
void Enrollment::updateGrade(std::string value) {
    grade_ = std::move(value);
    status_ = grade_.empty() ? "Enrolled" : "Completed";
}
