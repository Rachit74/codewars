/*
Write a function that when given a number >= 0, returns an Array of ascending length subarrays.

pyramid(0) => [ ]
pyramid(1) => [ [1] ]
pyramid(2) => [ [1], [1, 1] ]
pyramid(3) => [ [1], [1, 1], [1, 1, 1] ]

Note: the subarrays should be filled with 1s

*/

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pyramid(int n) {
    vector<vector<int>> res; //final result array

    for (int i = 1; i<=n; i++){
        vector<int> subarr(i, 1); //create a vector of size i with 1's
        res.push_back(subarr);
    }

    return res;
}