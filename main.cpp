//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <limits>
#include <vector>
#include <cstdlib>

using namespace std;

std::vector<std::string> splitString(std::string);

//
// Complete the miniMaxSum function below.
//
long aVeryBigSum(std::vector<long> ar)
{
    long int count = 0;
    for (auto iter : ar)
    {
        count += iter;
    } // end for
    return count;
} // end of function simpleArraySum

// main is where program execution starts
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    std::string ar_temp_temp;
    getline(cin, ar_temp_temp);

    std::vector<std::string> ar_temp = splitString(ar_temp_temp);
    std::vector<long> ar(ar_count);

    for (int i = 0; i < ar_count; i++)
    {
        long ar_item = stol(ar_temp[i]);
        ar[i] = ar_item;
    } // end for

    long result = aVeryBigSum(ar);
    fout << result << "\n";
    fout.close();
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
