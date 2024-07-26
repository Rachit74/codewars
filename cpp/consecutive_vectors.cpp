/*
Write a  program to check whether numbers in a vector can be rearranged so that each number appears exactly once in a consecutive list of numbers. Return true otherwise false.

{1,3,2} -> true
{1,4,2} -> false
*/


#include <iostream>
#include <vector>
#include <algorithm> //must be included to use std:sort (otherwise write own sort function)

using namespace std;

// using bubble sort for sorting
/*
void sort(vector <int>& vec) {
    int n = vec.size();
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1;j++) {
            if (vec.at(j) > vec.at(j+1)) {
                swap(vec.at(j),vec.at(j+1));
            };
        };
    };
};
*/
// can use std::sort(begin,end) instead of writing my own sorting function (sorts in the ascending order)
bool checkConsecutive(vector <int>& vec) { // if [i] + 1 == [i+1] then consecutive
    std:sort(vec.begin(),vec.end());
    for (int i=0;i<vec.size()-1;i++) {
        if (vec.at(i) + 1 != vec.at(i+1)) {
            return false; // returns flase as soon as finds an pair which is not consecutive
        };
    };
    return true;
};

int main() {
    vector <int> vec;
    vec = {1,3,2,5};

    cout << checkConsecutive(vec) << "\n";

    return 0;
}