/*
Write a function that takes an array of words and smashes them together into a sentence and returns the sentence. You can ignore any need to sanitize words or add punctuation, but you should add spaces between each word. Be careful, there shouldn't be a space at the beginning or the end of the sentence!

example:
['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
*/

#include <iostream>
#include <vector>

using namespace std;

string sentenceSmash(vector<string> words) {
    string sentence("");
    // Empty array should return an empty string
    if (words.size() == 0) {
        return "";
    }
    for (string word: words) {
        // append each word into sentence followed by a space
        sentence.append(word);
        sentence.append(" ");
    };
    // removing the space from the end of the sentence
    sentence.pop_back();
    return sentence;
}

// local tests
int main(){
    vector<string> words = {"hello", "world"};
    cout << sentenceSmash(words);
    vector<string> words2 = {};
    cout << sentenceSmash(words2);
    return 0;
}