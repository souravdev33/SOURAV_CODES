#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// Function to find all LCS subsequences using backtracking
void backtrack(vector<vector<int>> &dp, string &X, string &Y, int i, int j, string lcs, set<string> &lcs_set) {
    // If either string is empty, store the constructed LCS
    if (i == 0 || j == 0) {
        reverse(lcs.begin(), lcs.end());
        lcs_set.insert(lcs);
        return;
    }

    // If the characters match, add to the LCS and move diagonally up-left
    if (X[i - 1] == Y[j - 1]) {
        lcs += X[i - 1];
        backtrack(dp, X, Y, i - 1, j - 1, lcs, lcs_set);
    } else {
        // If the characters don't match, explore both possible directions
        if (dp[i - 1][j] == dp[i][j]) backtrack(dp, X, Y, i - 1, j, lcs, lcs_set);  // Move up
        if (dp[i][j - 1] == dp[i][j]) backtrack(dp, X, Y, i, j - 1, lcs, lcs_set);  // Move left
    }
}

// Function to calculate the length of LCS and return unique LCS subsequences
set<string> findLCS(string &X, string &Y) {
    int m = X.size();
    int n = Y.size();

    // DP table to store lengths of LCS
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Build the dp table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    // Set to store unique LCS subsequences
    set<string> lcs_set;

    // Start backtracking from bottom-right of the dp table
    backtrack(dp, X, Y, m, n, "", lcs_set);

    return lcs_set;
}

int main() {
    string X, Y;
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    // Get the unique LCS subsequences
    set<string> lcs_subsequences = findLCS(X, Y);

    // Output the length of LCS
    if (!lcs_subsequences.empty())
        cout << "Length of LCS is " << lcs_subsequences.begin()->size() << endl;

    // Output all unique LCS subsequences
    cout << "Unique LCS subsequences:" << endl;
    for (const string &subseq : lcs_subsequences) {
        cout << subseq << endl;
    }

    return 0;
}
