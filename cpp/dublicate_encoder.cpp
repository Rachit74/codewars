#include <iostream>
#include <unordered_map>
#include <string>


/*
The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.
Examples

"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))((" 

*/

std::string dublicateEncoder(const std::string &word) {

    // declare the lookup table
    std::unordered_map<char, int> charMap;

    // make key value pairs
    for (char ch : word) {
        char lowerCH = tolower(ch);
        charMap[lowerCH]++;
    }

    // make result string
    std::string result;
    for (char ch : word) {
        char lowerCH = tolower(ch);
        if (charMap[lowerCH] > 1) {
            result += ')';
        } else {
            result += '(';
        }
    }

    return result;
    
}

int main() {

    std::cout << dublicateEncoder("hhhhello");

}