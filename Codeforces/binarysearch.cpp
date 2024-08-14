#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int x;
    cin >> x;

    int left = 0;
    int right = n;
    bool found = false;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == x)
        {
            cout << "Element " << arr[mid] << "found at position" << mid << "\n";
            found = true;
            break;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    if (!found)
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
