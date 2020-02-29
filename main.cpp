// Suraj Pawar
#include <iostream>
#include <vector>
#include "mat.h"
using namespace std;
#define nl "\n"   

int main(){
    
    long long p = 2, q = 2, r = 0;

    vector< vector<int> > a;
    vector< vector<int> > b;

    for(int i = 0; i < 2; i++) {
        vector<int> v;
        for(int j = 0; j < 2; j++) {
            v.push_back(1);
        }
        a.push_back(v);
    }
    for(int i = 0; i < 2; i++) {
        vector<int> v;
        for(int j = 0; j < 2; j++) {
            v.push_back(1);
        }
        b.push_back(v);
    }
    vector< vector<int> > c(2, vector<int>(2, 0));

    matrix_mul(a, b, c, p, q, r);

    for (int i = 0; i < p; ++i){
        for (int j = 0; j < r; ++j)
            cout << c[i][j] << "\t";
        cout << nl;
    }
    return 0;   
}
