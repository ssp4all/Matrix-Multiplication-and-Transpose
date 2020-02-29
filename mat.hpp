#include <iostream>
#include <vector>

using namespace std;

template <class T>
vector< vector<T> > matrix_mul(vector<vector<T> > a, vector<vector<T> > b)
{
    try
    {
        long long nr_a = a.size();
        long long nc_a = a[0].size();

        long long nr_b = b.size();
        long long nc_b = b[0].size();

        vector< vector<T> > c(nr_a, vector<T>(nc_b, 0));

        long long nr_c = c.size();
        long long nc_c = c[0].size();

        if (nc_a != nr_b or nr_c != nr_a or nc_c != nc_b)
        {
            throw "";
        }
        if (nr_a <= 0 || nc_a <= 0 || nc_b <= 0 || nr_b <= 0 || nr_c <= 0 || nc_c <= 0)
            throw "";
        for (long long i = 0; i < nr_a; ++i)
            for (long long j = 0; j < nc_a; ++j)
                for (long long k = 0; k < nc_b; ++k)
                    c[i][j] += a[i][k] * b[k][j];
        return c;
    }
    catch (...)
    {
        cout << "Err...Check dimensions...U know what I mean!"
             << "nl";
    }
}

template <class T>
vector< vector<T> > matrix_transpose(vector<vector<T> > a)
{
    long long nr = a.size();
    long long nc = a[0].size();

    vector< vector<int> > b(nc, vector<int>(nr, 0));

    for (long long i = 0; i < nc; ++i){
        for (long long j = 0; j < nr; ++j)
            b[i][j] = a[j][i];
    }
    return b;

    // try
    // {

    // }
    // catch (...)
    // {
    //     cout << "Err...Check dimensions...U know what I mean!"
    //          << "nl";
    // }
}