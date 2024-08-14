#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int opp_run,curr_run,balls_left;
        cin>>opp_run>>curr_run>>balls_left;
        int balls_played=(300-balls_left);
        double over1=double(balls_played)/6.00;
        double curr_runrate=curr_run/double(over1);
        double over2=double(balls_left)/6.00;
        double ask_runrate=double(((opp_run+1)-curr_run))/double(over2);
        cout<<setprecision(2)<<curr_runrate<<" "<<ask_runrate<<endl;
    }
return 0;
}
