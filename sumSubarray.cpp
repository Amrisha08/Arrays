//Given an array a[] of size n. Output sum of each subarray of the given array.

#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,sum=0;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array: ";
    for(k=0;k<n;k++){
        cin>>arr[k];
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            sum=sum+arr[j];

        }
    }
    cout<<sum;
}