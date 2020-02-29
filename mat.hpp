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

        if (nr_a <= 0 || nc_a <= 0 || nc_b <= 0 || nr_b <= 0)
            throw "";
        if (nc_a != nr_b)
            throw "";
        
        vector< vector<T> > c(nr_a, vector<T>(nc_b, 0));

        long long nr_c = c.size();
        long long nc_c = c[0].size();
        
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
    try{
        long long nr = a.size();
        long long nc = a[0].size();

        if (nc <= 0 || nr <= 0)
            throw "";
        
        vector< vector<int> > b(nc, vector<int>(nr, 0));

        for (long long i = 0; i < nc; ++i){
            for (long long j = 0; j < nr; ++j)
                b[i][j] = a[j][i];
        }
        return b;
    }
    catch (...)
    {
        cout << "Err...Check dimensions!"
             << "nl";
    }
}