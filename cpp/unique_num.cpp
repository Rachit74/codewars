/*
There is an array with some numbers. All numbers are equal except for one. Try to find it!

find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55

It’s guaranteed that array contains at least 3 numbers.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

/*
function takes an array as parameter
makes a hashmap with values as the items of parameter
increase the count value if any key exists;
*/
int findUnique(vector<int> arr) {

    // declare map
    // takes the datatype of key and value pair
    unordered_map<int, int> map;

    // assing key and value pairs
    for (int i = 0; i < arr.size(); i++) {
        // if the key for current number exists then increase the count;
        if (map.find(arr[i]) != map.end()) {
            map[arr[i]]++;
        } else {
            // else add the key and make the count 1
            map[arr[i]] = 1;
        }
    }

    // loop to return the number which has a value of 1;
    /*
    constant auto refrence to pair in map, if value is 1 then return the key;
    refrencing does not make a copy of the pair which can improve performance of the program;
    */
    for (const auto &pair: map) {
        if (pair.second == 1) {
            return pair.first;
        }
    }

    return -1;
}

int main() {
    cout << findUnique(vector<int> {1,1,2,3,3});
    return 0;
}