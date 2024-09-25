/*
You are going to be given an array of integers. Your job is to take that array and find an index N where the sum of the integers to the left of N is equal to the sum of the integers to the right of N.

If there is no index that would make this happen, return -1.

Let's say you are given the array {1,2,3,4,3,2,1}:
Your function will return the index 3, because at the 3rd position of the array, the sum of left side of the index ({1,2,3}) and the sum of the right side of the index ({3,2,1}) both equal 6.

You are given the array {1,100,50,-51,1,1}:
Your function will return the index 1, because at the 1st position of the array, the sum of left side of the index ({1}) and the sum of the right side of the index ({50,-51,1,1}) both equal 1.

----approach----

get total sum
subtract the left sum and check if right sum and left sum are equal

*/

#include <iostream>
#include <vector>
using namespace std;

int equalSidesOfArray(vector<int> arr) {
    // total sum
    int total_sum;
    for (int num: arr) {
        total_sum += num;
    }

    int left_sum = 0;
    // loop through array and check for left and right sum
    for (int i = 0; i < arr.size(); ++i) {
        int right_sum = total_sum - left_sum - arr[i];

        if (left_sum == right_sum) {
            return i;
            break;
        }

        // if sum not equal then increment left sum for next 
        left_sum += arr[i];
    }
    return -1;
};

int main() {
    vector<int> array = {1,2,3,4,3,2,1};
    cout << equalSidesOfArray(array);
    return 0;
}
