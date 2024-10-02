/*
You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.
Examples

[2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)

*/

#include <iostream>
#include <vector>

int FindOutlier(const std::vector<int> &arr) {
    int odd_count = 0;
    int even_count = 0;
    int outlier = 0;

    // Count odd and even numbers
    for (int num : arr) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    if (odd_count > 1) {
        for (int num : arr) {
            if (num % 2 == 0) {
                outlier = num;
                break;
            }
        }
    } else {
        for (int num : arr) {
            if (num % 2 != 0) {
                outlier = num;
                break;
            }
        }
    }

    return outlier;
}


int main() {
    std::cout << FindOutlier(std::vector<int> {2,4,5,6,8});
    return 0;
}