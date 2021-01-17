//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <map>

using namespace std;

// main is where program execution starts
int main()
{
    int a, b;
    cin >> a >> b;

    map<int, string> nums = {
        {1, "one"}, {2, "two"}, {3, "three"},
        {4, "four"}, {5, "five"}, {6, "six"},
        {7, "seven"}, {8, "eight"}, {9, "nine"}
    };

    for (int i = a; i <= b; ++i)
    {
        if (i >= 1 && i <= 9)
        {
            auto search = nums.find(i);
            cout << search->second << endl;
        } // end if
        else if (i % 2 == 0)
        {
            cout << "even" << endl;
        } // end else if
        else
        {
            cout << "odd" << endl;
        } // end else

    } // end for
    return EXIT_SUCCESS;
} // end of function main
