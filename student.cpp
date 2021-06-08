//
// file: student.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include "student.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>


void Student::set_first_name(std::string new_first_name)
{
    first_name = new_first_name;
}

void Student::set_last_name(std::string new_last_name)
{
    last_name = new_last_name;
}

void Student::set_standard(const int new_standard)
{
    standard = new_standard;
}

void Student::set_age(const int new_age)
{
    age = new_age;
}

std::string Student::to_string()
{
    std::stringstream expression;
    expression << get_age()
               << "," << get_first_name()
               << "," << get_last_name()
               << "," << get_standard();
    return expression.str();
}

std::string Student::get_first_name()
{
    return first_name;
}

std::string Student::get_last_name()
{
    return last_name;
}

const int Student::get_standard()
{
    return standard;
}

const int Student::get_age()
{
    return age;
}
