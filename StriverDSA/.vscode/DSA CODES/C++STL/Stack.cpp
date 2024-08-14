#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.top()<<endl;
    cout<<st.size()<<endl;
    cout<<st.empty()<<endl;
    // st.pop();

    while(st.size()>0){
        cout<<st.top()<<endl;
        st.pop();
    }
    
}