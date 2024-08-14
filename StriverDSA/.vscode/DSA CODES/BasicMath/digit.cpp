#include <iostream>
#include <set>
#include<list> 
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int>li;

    while (n != 0) {
        int digit = n % 10;
        li.push_back(digit);
        n = n / 10;
    }

    cout << li.size(); 
    return 0;
}
#include <iostream>
#include <set>
#include<list> 
using namespace std;

int main() {
    int n;
    cin >> n;
    list<int>li;

    while (n != 0) {
        int digit = n % 10;
        li.push_back(digit);
        n = n / 10;
    }

    for(auto i: li){
        cout<<i;
    } 
    return 0;
}
