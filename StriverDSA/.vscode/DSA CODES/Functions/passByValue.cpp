// #include<iostream>
// using namespace std;

// void display(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=10;
//     cout<<num<<endl;
// }

// int main(){
//     int num;
//     num=10;
//     display(num); //here it is sending the copy of the num variable
//     cout<<num<<endl;
// }



#include<iostream>
using namespace std;

void display(string str){
    cout<<str<<endl;
    str[0]='C';
    str[1]='U';
    cout<<str<<endl; 
}
int main(){
    string str;
    str="Sourav";
    display(str); //here it is sending the copy of the num variable
    cout<<str<<endl;
}

