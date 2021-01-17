//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <limits>
#include <cstdlib>
#include <map>

using namespace std;

// main is where program execution starts
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map<int, string> nums = {
        {1, "one"}, {2, "two"},
        {3, "three"}, {4, "four"},
        {5, "five"}, {6, "six"},
        {7, "seven"}, {8, "eight"},
        {9, "nine"}
    };

    if (n >= 1 && n <= 9)
    {
        auto search = nums.find(n);
        cout << search->second << endl;
    } // end if
    else
    {
        cout << "Greater than 9" << endl;
    } // end else
    return EXIT_SUCCESS;
} // end of function main
