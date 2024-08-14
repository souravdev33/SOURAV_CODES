// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     string str=to_string(n);
//     int count=0;
//     while(str.size()!=0){
//         str.pop_back();
//         count++;

//     }

//     if(str.back()==0)count--;
//     if(str.back()!=0) count++;

//     cout<<count<<endl;
    



// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string str = to_string(n);
    int count = 0;

    // Count digits by popping characters
    while (!str.empty()) {
        count++;
        if (str.back() == '0' && str.size() == 1) {
            // If the number is zero, don't decrement count as we want the total number of digits
            break;
        }
        str.pop_back();
    }

    cout << count << endl;

    return 0;
}
