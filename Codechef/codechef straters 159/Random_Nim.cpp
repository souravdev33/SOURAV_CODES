#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

// Function to compute modular exponentiation
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to calculate probability for Alice to win
long long calculate_probability(int D, bool alice_has_winning_position) {
    long long P, Q;
    if (alice_has_winning_position) {
        // If Alice has a winning position, probability is 1 (P/Q = 1/1)
        P = 1;
        Q = 1;
    } else {
        // Otherwise, P = (D + 1) / 2D
        P = (D + 1) / 2;
        Q = D;
    }
    
    // Calculate P * Q^(-1) % MOD
    long long Q_inv = mod_exp(Q, MOD - 2, MOD);
    return (P * Q_inv) % MOD;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, D;
        cin >> N >> D;
        vector<int> A(N);
        
        // Read the piles
        int nim_sum = 0;
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            nim_sum ^= A[i];
        }
        
        // Determine if Alice has a winning position
        bool alice_has_winning_position = (nim_sum != 0);
        
        // Calculate the probability of Alice winning
        cout << calculate_probability(D, alice_has_winning_position) << endl;
    }

    return 0;
}
