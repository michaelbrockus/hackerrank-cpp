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
#include <vector>
#include <cstdlib>

using namespace std;

vector<string> splitString(string);

//
// Given five positive integers, find the minimum and
// maximum values that can be calculated by summing exactly
// four of the five integers. Then print the respective
// minimum and maximum values as a single line of two
// space-separated long integers.
//
void miniMaxSum(vector<int> arr) {
    unsigned long long sum = 0;
    unsigned long long min;
    unsigned long long max;
    unsigned long long num;

    for (size_t iter = 0; iter < arr.size(); ++iter)
    {
        num = arr[iter];
        sum += num;
        if (iter == 0)
        {
            max = num;
            min = num;
        } // end if
        else
        {
            if (num > max)
            {
                max = num;
            } // end if
            else if (num < min)
            {
                min = num;
            } // end else if
        } // end else
    } // end for
    std::cout << (sum - max) << " " << (sum - min) << std::endl;
} // end of function miniMaxSum

// main is where program execution starts
int main(void)
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = splitString(arr_temp_temp);

    vector<int> arr(5);

    for (size_t i = 0; i < arr.size(); i++) {
        int arr_item = stoi(arr_temp[i]);
        arr[i] = arr_item;
    }

    miniMaxSum(arr);
    return EXIT_SUCCESS;
} // end of function main

//
// Should split streamed string data
//
std::vector<std::string> splitString(std::string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    } // end while

    std::vector<std::string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    } // end while

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
} // end of function splitString
