#include<iostream>
using namespace std;
int main(){
    pair<int,int>p(1,3);
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string>p2={33,"sourav"};

    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int ,char>p3;
    p3.first=27;
    p3.second='S';
    cout<<p3.first<<" "<<p3.second<<endl;

    pair<int,pair<int,int>>p4={1,{2,3}};
    cout<<p4.first<<" "<<p4.second.first<<" "<<p4.second.second<<endl;

    pair<int ,int>arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
return 0;
}