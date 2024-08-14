#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondlargest(vector<int>& a, int n) {
    if (n < 2) // Not enough elements
        return INT_MIN; // Return some invalid value

    int largest = a[0];
    int slargest = INT_MIN; // Initialize with minimum value

    for (int i = 1; i < n; ++i) {
        if (a[i] > largest) {
            slargest = largest;
            largest = a[i];
        } else if (a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;
}

int secondsmallest(vector<int>& a, int n) {
    if (n < 2) // Not enough elements
        return INT_MAX; // Return some invalid value

    int smallest = a[0];
    int ssmallest = INT_MAX; // Initialize with maximum value

    for (int i = 1; i < n; ++i) {
        if (a[i] < smallest) {
            ssmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return ssmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int slargest = secondlargest(a, n);
    int ssmallest = secondsmallest(a, n);
    return {slargest, ssmallest};
}

int main() {
    // Example usage
    vector<int> arr = {10, 5, 20, 8, 15};
    vector<int> secondOrder = getSecondOrderElements(arr.size(), arr);

    cout << "Second largest: " << secondOrder[0] << endl;
    cout << "Second smallest: " << secondOrder[1] << endl;

    return 0;
}
