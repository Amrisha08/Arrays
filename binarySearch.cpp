#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            return mid;

        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return -1;

}
int main(){
    int n,key;
    cout<<"enter n:";
    cin>>n;
    int arr[n];
    cout<<"enter key:";
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<binarySearch(arr,n,key);

}

