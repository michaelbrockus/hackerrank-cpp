//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

// main is where program execution starts
int main(void)
{
    vector<int> vect = {0, 0, 0};
    auto temporary = 0;
    auto summary = 0;        
    
    for (size_t iter : vect)
    {
        cin >> temporary;
        vect[iter] = temporary;
    } // eng for
    
    for (size_t iter : vect)
    {
        summary += iter;
    } // end for
    cout << summary << endl;
    return EXIT_SUCCESS;
} // end of function main
