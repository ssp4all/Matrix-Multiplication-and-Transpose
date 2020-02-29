// @uthor: Suraj Sunil Pawar
//C++ program for the matrix multiplication and its transpose

/*
Copyright (C) 2001-2020 Free Software Foundation, Inc.

This file is part of the GNU ISO C++ Library.  This library is free
software; you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the
Free Software Foundation; either version 3, or (at your option)
any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

Under Section 7 of GPL version 3, you are granted additional
permissions described in the GCC Runtime Library Exception, version
3.1, as published by the Free Software Foundation.

You should have received a copy of the GNU General Public License and
a copy of the GCC Runtime Library Exception along with this program;
*/

// Import all the standard libraries
#include <iostream>
#include <vector>
#include "mat.hpp" //Here matrix multiplication and transpose are defined
using namespace std;
#define nl "\n" 

// Driver function
int main()
{
    /* Initialize matrix a and b
    vectors from C++ STL are used
    */
    vector<vector<int> > a;
    vector<vector<int> > b;

    // Initialize vector "a" with some random data
    for (int i = 0; i < 2; i++)
    {
        vector<int> v;
        for (int j = 0; j < 2; j++)
        {
            v.push_back(j+1);
        }
        a.push_back(v);
    }
    // Initialize vector "b" with some random data
    for (int i = 0; i < 2; i++)
    {
        vector<int> v;
        for (int j = 0; j < 2; j++)
        {
            v.push_back(j+1);
        }
        b.push_back(v);
    }
    /*
    Now, pass the target vectors whom multiplication and traspose 
    is to be determined. Make sure to match dimenstion matching 
    required for matrix multiplication.

    If dimensions does not match for example,  dimensions of targer 
    matrixes should be-
    a = m X n
    b = n X p
    then result vector after multiplication will have dimension =
    c = m X p
    In case if it does not match then it will throw an error for the
    dimension mismatch.
    */

    vector<vector<int> > c = matrix_mul(a, b);
    // vector<vector<int> > c = matrix_transpose(a);

    // Verify output
    for (int i = 0; i < c.size(); ++i)
    {
        for (int j = 0; j < c[0].size(); ++j)
            cout << c[i][j] << "\t";
        cout << nl;
    }
    // return no error to inform OS
    return 0;
}
