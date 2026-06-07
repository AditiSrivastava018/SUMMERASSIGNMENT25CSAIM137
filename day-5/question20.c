#include <stdio.h>

int main() {
    int n, i, largestPrime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Remove all factors of 2
    while(n % 2 == 0) {
        largestPrime = 2;
        n = n / 2;
    }

    // Check odd factors
    for(i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            largestPrime = i;
            n = n / i;
        }
    }

    // If remaining number is a prime
    if(n > 2) {
        largestPrime = n;
    }

    printf("Largest prime factor is: %d\n", largestPrime);

    return 0;
}