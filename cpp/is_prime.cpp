/*
Define a function that takes an integer argument and returns a logical value true or false depending on if the integer is a prime.

Per Wikipedia, a prime number ( or a prime ) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Requirements
    - You can assume you will be given an integer input.
    - You can not assume that the integer will be only positive. You may be given negative numbers as well ( or 0 ).

example:
is_prime(1) false 
is_prime(2)  true 
is_prime(-1) false 
*/

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n%i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    cout << isPrime(1);
    return 0;
}