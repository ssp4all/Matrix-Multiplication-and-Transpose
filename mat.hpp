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

// Header file with sourcecode for matrix multiplication and transpose

#include <iostream>
#include <vector>

using namespace std;

// Template to handle different data types.
template <class T>
vector< vector<T> > matrix_mul(vector<vector<T> > a, vector<vector<T> > b)
{
    try
    {
        // Dimensions of matrix "a"
        long long nr_a = a.size();
        long long nc_a = a[0].size();

        // Dimensions of matrix "b"
        long long nr_b = b.size();
        long long nc_b = b[0].size();

        // Check for dimensionality match else throw error
        if (nr_a <= 0 || nc_a <= 0 || nc_b <= 0 || nr_b <= 0)
            throw "";
        if (nc_a != nr_b)
            throw "";

        // Result matrix "c" to hold output
        vector< vector<T> > c(nr_a, vector<T>(nc_b, 0));

        long long nr_c = c.size();
        long long nc_c = c[0].size();
        
        for (long long i = 0; i < nr_a; ++i)
            for (long long j = 0; j < nc_a; ++j)
                for (long long k = 0; k < nc_b; ++k)
                    c[i][j] += a[i][k] * b[k][j];
        return c;   //return output by value
    }
    catch (...) //TO catch all types of error...honesly I am lazy to catch them differently :(
    {
        cout << "Err...Check dimensions...U know what I mean!"
             << "nl";
    }
}

// Definition of the matrix transposition
template <class T>
vector< vector<T> > matrix_transpose(vector<vector<T> > a)
{
    try{
        // Dimensions of matrix "a"
        long long nr = a.size();
        long long nc = a[0].size();

        // Check for dimensionality match else throw error
        if (nc <= 0 || nr <= 0)
            throw "";
        
        //Ouput matrix
        vector< vector<int> > b(nc, vector<int>(nr, 0));

        //Simply interchange rows with columns
        for (long long i = 0; i < nc; ++i){
            for (long long j = 0; j < nr; ++j)
                b[i][j] = a[j][i];
        }
        return b; // return output matrix
    }
    catch (...)
    {
        cout << "Err...Check dimensions!" //catch throwed error
             << "nl";
    }
}