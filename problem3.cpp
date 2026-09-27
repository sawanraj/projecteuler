/*
The prime factors of 13195 are 5,7,13 and 29 .

What is the largest prime factor of the number 600851475143 ?


find the prime 
    i. n should be divisible by 1 and its self(n) under the sqrt(n) of its()
A Factor in math is a whole number that divides evenly into another number without leaving a remainder.

*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 1. Must use 'long long' because 600851475143 exceeds the capacity of a standard 32-bit 'int'
    long long n = 600851475143;
    long long largest_fact = 0;

    // 2. Divide out all factors of 2 first so we only check odd numbers next
    while (n % 2 == 0) {
        largest_fact = 2;
        n /= 2;
    }

    // 3. Loop through odd numbers up to the updating square root of n
    for (long long i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            largest_fact = i;
            n /= i; // This reduces n drastically, speeding up the loop
        }
    }

    // 4. If what remains of n is greater than 2, it is the largest prime factor
    if (n > 2) {
        largest_fact = n;
    }

    cout << "Max prime factor: " << largest_fact << endl;
    return 0; 
}
