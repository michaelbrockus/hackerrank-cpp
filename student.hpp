//
// file: student.hpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>
using namespace std;

class Student {
    private:
    std::string first_name;
    std::string last_name;
    int standard;
    int age;

    public:
    void set_first_name(const std::string &new_first_name);
    void set_last_name(const std::string &new_last_name);
    void set_standard(const int new_standard);    
    void set_age(const int new_age);
    std::string to_string();
    std::string get_first_name();
    std::string get_last_name();
    const int get_standard();
    const int get_age();
};

#endif // end of STUDENT_HPP
