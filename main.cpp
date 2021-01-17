//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

//
// Add `int max_of_four(int a, int b, int c, int d)` here.
//
int maxOfFour(int a, int b, int c, int d)
{
    int max = a;
    if (b > max)
    {
        max = b;
    } // end if
    if (c > max)
    {
        max = c;
    } // end if
    if (d > max)
    {
        max = d;
    } // end if
    return max;
} // end of function maxOfFour

// main is where program execution starts
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int ans = maxOfFour(a, b, c, d);
    printf("%d", ans);

    return EXIT_SUCCESS;
} // end of function main
