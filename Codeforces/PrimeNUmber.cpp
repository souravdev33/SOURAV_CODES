#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        int sum_divisors = 0;
        
        // Calculate sum of divisors
        for (int i = 1; i <= sqrt(N); ++i) {
            if (N % i == 0) {
                sum_divisors += i;
                if (i != N / i) {
                    sum_divisors += N / i;
                }
            }
        }
        
        // Check if the sum of divisors is a prime number
        if (is_prime(sum_divisors)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
