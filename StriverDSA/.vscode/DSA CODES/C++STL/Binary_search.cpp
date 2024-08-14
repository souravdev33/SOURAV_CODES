#include <iostream>
#include <vector>
#include <algorithm> // Include this header for std::binary_search
using namespace std;

int main() {
    vector<int> v = {15,20,11,7,29,9,25};
    sort(v.begin(),v.end());
    cout << binary_search(v.begin(), v.end(), 11) << endl;
    cout<<lower_bound(v.begin(), v.end(), 11)-v.begin() << endl;
    cout<<upper_bound(v.begin(), v.end(), 11)-v.begin() << endl;
    return 0;
}
