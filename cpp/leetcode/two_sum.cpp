/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]

*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> arr, int targer) {
    vector<int> index_vec;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = i + 1; j < arr.size(); ++j) {
            if (arr[i] + arr[j] == targer) {
                index_vec.push_back(arr[i]);
                index_vec.push_back(arr[j]);
                return index_vec;
                break;
            }
        }
    }

    return index_vec;
}

int main() {

    vector<int> result = twoSum(vector<int> {2, 7, 11, 15}, 9);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No two sum solution found." << endl;
    }
    return 0;
}