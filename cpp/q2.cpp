/*
Write a C++ program that returns the elements
in a vector that are strictly smaller than their adjacent left and right neighbours.

({7, 2 ,5, 3, 1, 5, 6}) -> 2, 1
({1, 2 ,5, 0, 3, 1, 7}) -> 0, 1
*/

#include <iostream>
#include <vector>

using namespace std;

void filterSmallest(vector <int>& vec) {
    vector <int> new_vec;
    int n = vec.size();
    for (int i=0;i<n-1;i++) {
        if (vec[i] == 0 || vec[i] == n-1){
            if (vec[i] < vec[i+1] || vec[i]<vec[n-1]){
                new_vec.push_back(vec[i]);
            };
        } else if (vec[i]<vec[i+1] && vec[i]<vec[i-1])
        {
            new_vec.push_back(vec[i]);
        };
        
    };

    for (int i=0;i<new_vec.size();i++){
        cout << new_vec[i] << "\n";
    };

};

int main() {
    vector <int> vec;
    vec = {1, 2 ,5, 0, 3, 1, 7};

    filterSmallest(vec);

    return 0;
};