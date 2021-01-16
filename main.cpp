//
// file: main.cpp
// author: Michael Brockus
// gmail: <michaelbrockus@gmail.com>
//
#include <iostream>
#include <fstream>
#include <algorithm>
#include <functional>
#include <iterator>
#include <limits>
#include <vector>
#include <cstdlib>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

//
// Complete the 'birthdayCakeCandles' function below.
//
// The function is expected to return an INTEGER.
// The function accepts INTEGER_ARRAY candles as parameter.
//
int birthdayCakeCandles(vector<int> candles) {
    auto number = 0;
    auto current = 0;
    for (auto iter = 0 ; iter < candles.size(); ++iter)
    {
        if (candles[iter] > current)
        {
            current = candles[iter];
        } // end if

    } // end for

    for (auto iter = 0; iter < candles.size(); ++iter)
    {
        if (candles[iter] < current)
        {
            continue;
        } // end if
        else
        {
            ++number;
        } // end else

    } // end for
    return number;
} // end of function birthdayCakeCandles

// main is where program execution starts
int main(void)
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string candles_count_temp;
    getline(cin, candles_count_temp);

    int candles_count = stoi(ltrim(rtrim(candles_count_temp)));

    string candles_temp_temp;
    getline(cin, candles_temp_temp);

    vector<string> candles_temp = split(rtrim(candles_temp_temp));

    vector<int> candles(candles_count);

    for (int i = 0; i < candles_count; i++) {
        int candles_item = stoi(candles_temp[i]);

        candles[i] = candles_item;
    }

    int result = birthdayCakeCandles(candles);

    fout << result << "\n";

    fout.close();
    return EXIT_SUCCESS;
} // end of function main

//
// Should trim stream from the left
//
string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), [](unsigned char c) { return !std::isspace(c); }));

    return s;
} // end of function ltrim

//
// Should trim stream from the right
//
string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char c) { return !std::isspace(c); }).base(),
        s.end());

    return s;
} // end of function rtrim

//
// Should split the stream
//
vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    } // end while

    tokens.push_back(str.substr(start));

    return tokens;
} // end of function split
