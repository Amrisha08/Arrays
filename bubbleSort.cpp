#include<iostream>
using namespace std;
int main(){
    int n,i,j,k;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array: ";
    for(k=0;k<n;k++){
        cin>>arr[k];
    }
    for(i=0;i<n-1;i++){//no of passes
        for(j=0;j<n-1-i;j++){  //no of comparision
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int m=0;m<n;m++){
        cout<<arr[m];
    }
}
//stable
//O(N^2), BEST=O(N)