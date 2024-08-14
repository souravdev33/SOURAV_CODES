#include <iostream>
#include<bits/stdc++.h>

using namespace std;

double calculate_area(int n, double ℓ, double d, int g) {
    double area = n * pow(ℓ, 2) / (4.0 * tan(M_PI / n)) + g * n * pow(d, 2);
    return area;
}

int main() {
    int n_test_cases;
    cin >> n_test_cases;

    cout << fixed << setprecision(14);

    for (int i = 0; i < n_test_cases; i++) {
        int n, g;
        double ℓ, d;
        cin >> n >> ℓ >> d >> g;
        double area = calculate_area(n, ℓ, d, g);
        cout << area << endl;
    }

    return 0;
}
