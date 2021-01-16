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
// Should sum the difference between the two diagonal
// boxes.
//
int diagonalDifference(vector<vector<int>> arr) {
    auto sum1 = 0, sum2 = 0;
    auto col = 0;

    for (size_t row = 0; row < arr.size(); ++row)
    {
        sum1 += arr[row][col];
        col++;
    } // end for

    col = arr[0].size() - 1;
    for (size_t row = 0; col > -1; ++row)
    {
        sum2 += arr[row][col];
        col--;
    } // end for
    auto diff = sum1 - sum2;
    return (diff < 0)? diff = 0 - diff : diff;
} // end of function diagonalDifference

// main is where program execution starts
int main(void)
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    vector<vector<int>> arr(n);

    for (auto i = 0; i < n; i++)
    {
        arr[i].resize(n);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (auto j = 0; j < n; j++)
        {
            int arr_row_item = stoi(arr_row_temp[j]);

            arr[i][j] = arr_row_item;
        }
    }

    int result = diagonalDifference(arr);

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
