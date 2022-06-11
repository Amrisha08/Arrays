#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array";
    for(k=0;k<n;k++){
        cin>>arr[k];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){ //descending:arr[i]<arr[j]
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int m=0;m<n;m++){
        cout<<arr[m];
    }



}
//stable or not
/*
   stable
*/
//timecomp=O(n^2)