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
// Complete the miniMaxSum function below.
//
vector<int> compareTriplets(vector<int> a, vector<int> b)
{
    auto countAlice = 0;
    auto countBob = 0;

    for (size_t i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            countAlice++;
        } // end if
        else if (a[i] < b[i])
        {
            countBob++;
        } // end else

    } // end for
    return vector<int>{countAlice, countBob};
} // end of function compareTriplets

// main is where program execution starts
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(3);

    for (size_t i = 0; i < 3; i++)
    {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    } // end for

    string b_temp_temp;
    getline(cin, b_temp_temp);

    vector<string> b_temp = split(rtrim(b_temp_temp));

    vector<int> b(3);

    for (size_t i = 0; i < 3; i++) {
        int b_item = stoi(b_temp[i]);
        b[i] = b_item;
    } // end for

    vector<int> result = compareTriplets(a, b);

    for (size_t i = 0; i < result.size(); i++)
    {
        fout << result[i];

        if (i != result.size() - 1)
        {
            fout << " ";
        } // end if
    } // end for

    fout << "\n";
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
        find_if(s.begin(), s.end(), [](unsigned char c){ return !std::isspace(c); })
    );

    return s;
} // end of function ltrim

//
// Should trim stream from the right
//
string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), [](unsigned char c){ return !std::isspace(c); }).base(),
        s.end()
    );

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
