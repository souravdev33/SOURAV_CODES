// #include<iostream>
// using namespace std;

// void display(int &num){
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

void display(int arr[],int n){
    arr[0]+=100;
    cout<<"Inside the display: "<<" "<<arr[0]<<endl;
}

int main(){
    int n=3;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    cout<<"Inside the main: "<<" "<<arr[0]<<endl;

}