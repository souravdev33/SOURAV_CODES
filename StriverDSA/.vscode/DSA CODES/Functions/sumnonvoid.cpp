#include<iostream>
using namespace std;
int add(int num1,int num2){
    int num3=num1+num2;
    return num3;
}
   
int main(){
    int num1,num2;
    cin>>num1>>num2;
    int res=add(num1,num2);
    cout<<res<<endl;

}
