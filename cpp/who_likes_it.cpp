#include <iostream>
#include <vector>
using namespace std;


/*
You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"

Approach
function which takes an array of n length with people who have liked the post, 
for every person in array we display "person1 and person2 and n.. others liked this post"

*/

void whoLikesIt(vector<string> names) {
    int len = names.size();

    // can also implement a switch case
    if (len == 0) {
        cout << "no one likes this" << endl;
    } else if (len == 1) {
        cout << names[0] << " likes this" << endl;
    } else if (len == 2) {
        cout << names[0] << " and " << names[1] << " like this" << endl;
    } else if (len == 3) {
        cout << names[0] << ", " << names[1] << " and " << names[2] << " like this" << endl;
    } else {
        cout << names[0] << ", " << names[1] << " and " << len - 2 << " others like this" << endl;
    }
}

int main() {
    vector<string> names1 = {"Rachit", "Sanchit"};
    vector<string> names2 = {"Saad", "Rachit", "Rahil"};
    whoLikesIt(names1);
    whoLikesIt(names2);
    return 0;
}