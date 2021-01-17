//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdio>
#include <ios>

using namespace std;

// main is where program execution starts
int main()
{
    int variableInt;
    long variableLong;
    char variableChar;
    float variableFloat;
    double variableDouble;

    cin >> variableInt >> variableLong >>
           variableChar >> variableFloat >> variableDouble;

    std::cout << variableInt << std::endl;
    std::cout << variableLong << std::endl;
    std::cout << variableChar << std::endl;
    printf("%.6f\n", variableFloat);
    printf("%.6lf\n", variableDouble);

    return EXIT_SUCCESS;
} // end of function main
