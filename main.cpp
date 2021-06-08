//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// main is where program execution starts
int main(void)
{
    int value;
    cin >> value;
    int arr[value];

    for (int iter = 0; iter < value; ++iter)
    {
        scanf("%d", &arr[iter]);
    } // end for

    for (int iter = value; iter > 0; --iter)
    {
        cout << arr[iter - 1] << " ";
    } // end for
    return EXIT_SUCCESS;
} // end of function main
