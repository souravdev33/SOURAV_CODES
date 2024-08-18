// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int &i : arr)
//         cin >> i;

//     sort(arr, arr + n);

//     int x;
//     cin >> x;
//     int low = 0;
//     int high = n - 1;

//     while (low < high){
//         int mid = low + (high - low )/2;
//         if(arr[mid]==x){
//             cout<<"Value found at position :"<<mid<<endl;
//         }
//     if(arr[mid]<x){
//         low=mid+1;
//     }
//     else{
//         high=mid-1;
//     }
// }
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binary(int n, int arr[], int x)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
      
    }
      return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &i : arr)
        cin >> i;

    int x;
    cin >> x;
    int result = binary(n, arr, x);
    if (result != -1)
    {
        cout << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
}
