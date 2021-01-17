//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <vector>
#include <cstdlib>

// main is where program execution starts
int main(void)
{
    vector<int> vect = {0, 0, 0};
    auto temporary = 0;
    auto summary = 0;        
    
    for (auto iter : vect)
    {
        cin >> temporary;
        vect.push_back(temporary);
    } // eng for
    
    for (auto iter : vect)
    {
        summary += iter;
    } // end for
    cout << summary << endl;
    return EXIT_SUCCESS;
} // end of function main
