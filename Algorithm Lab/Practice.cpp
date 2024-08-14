// #include<iostream>
// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// struct Item{
//     int object;
//     int profit;
//     int weight;
// };

// bool compare(Item a,Item b){
//     double r1=(double)a.profit/a.weight;
//     double r2=(double)b.profit/b.weight;
//     return r1>r2;
// }


// int main(){
//     int n;
//     cin>>n;

//     vector<Item>items(n);

//     for(int i=0;i<n;i++){
//         cin>>items[i].profit>>items[i].weight;
//         items[i].object=i;
//     }

//     sort(items.begin(),items.end(),compare);
//     int w;
//     cin>>w;

//     double ans=0;

//     vector<pair<int,double>>selected_items;

//     for(int i=0;i<n;i++){
//         if(w>=items[i].weight){
//             ans+=items[i].profit;
//             w-=items[i].weight;
//             selected_items.push_back({items[i].object,(double)items[i].weight});
//         }
//         else{
//             double val_per_unit=(double)items[i].profit/items[i].weight;
//             ans+=val_per_unit*w;
//             selected_items.push_back({items[i].object,(double)w});
//             break;
//         }

//     }
//     cout<<fixed<<setprecision(2)<<ans<<endl;

//     for(auto &it: selected_items){
//         cout<<"Item index : "<<it.first<<", weight : "<<it.second<<endl;
//     }
// return 0;
// }





// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// void merge(vector<int>&arr,int low,int mid,int high){
//     vector<int>temp;
//     int left=low;
//     int right=mid+1;

//     while(left<=mid and right<=high){
//         if(arr[left]<=arr[right]){
//             temp.push_back(arr[left]);
//             left++;
//         }
//         else{
//             temp.push_back(arr[right]);
//             right++;
//         }

//     }
//     while(left<=mid){
//         temp.push_back(arr[left]);
//         left++;
//     }
//     while(right<=high){
//         temp.push_back(arr[right]);
//         right++;
//     }

//     for(int i=low;i<=high;i++){
//         arr[i]=temp[i-low];
//     }
// }

// void merge_sort(vector<int>&arr,int low,int high){
//     if(low>=high) return;

//     int mid=(low+high)/2;
//     merge_sort(arr,low,mid);
//     merge_sort(arr,mid+1,high);
//     merge(arr,low,mid,high);
// }


// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     merge_sort(arr,0,n-1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(vector<int>&arr,int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(vector<int>&arr,int left,int right){
    int pivot=arr[right];
    int i=left-1;

    for(int j=left;j<right;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,right);
    return i+1;

}

void quicksort(vector<int>&arr,int left,int right){
    if(left<right){
        int pi=partition(arr,left,right);
        quicksort(arr,left,pi-1);
        quicksort(arr,pi+1,right);
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}