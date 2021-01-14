//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdio>

using namespace std;

//
// Add two numbers and return end result
//
int solveMeFirst(const int a, const int b)
{
    return a + b;
} // end of function solveMeFirst

// main is where program execution starts
int main(void)
{
    int num1, num2;
    int sum;

    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum << endl;

    return EXIT_SUCCESS;
} // end of function main
