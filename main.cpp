// @uthor: Suraj Sunil Pawar
//Matrix Multiplication and Transpose

#include <iostream>
#include <vector>
#include "mat.hpp"
using namespace std;
#define nl "\n"

int main()
{

    long long p = 2, q = 2, r = 2;
    vector<vector<int> > a;
    vector<vector<int> > b;

    for (int i = 0; i < 2; i++)
    {
        vector<int> v;
        for (int j = 0; j < 2; j++)
        {
            v.push_back(j);
        }
        a.push_back(v);
    }
    for (int i = 0; i < 2; i++)
    {
        vector<int> v;
        for (int j = 0; j < 2; j++)
        {
            v.push_back(j);
        }
        b.push_back(v);
    }
    // vector<vector<int> > c(2, vector<int>(2, 0));

    vector<vector<int> > c = matrix_mul(a, b);
    // vector<vector<int> > c = matrix_transpose(a);

    for (int i = 0; i < p; ++i)
    {
        for (int j = 0; j < r; ++j)
            cout << c[i][j] << "\t";
        cout << nl;
    }
    return 0;
}
