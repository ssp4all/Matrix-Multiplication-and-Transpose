#include <iostream>
#include <vector>

using namespace std;

template <class T>
void matrix_mul(vector< vector<T> > a, vector< vector<T> > b, vector< vector<T> > &c, long long p, long long q, long long r){
    try{
        for (int i = 0; i < p; ++i)
            for (int j = 0; j < q; ++j)
                for (int k = 0; k < r; ++k)
                    c[i][j] += a[i][k] * b[k][j];
    }
    catch(range_error c){
        throw "Dimension cannot be zero!";
    }
}
