#include<iostream>
using namespace std;
int main(){
    int n,i,j,k,curr;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter the array: ";
    for(k=0;k<n;k++){
        cin>>arr[k];
    }
    for(i=1;i<n;i++){
        curr=arr[i];
        j=i-1;
        while((arr[j]>curr)&&(j>=0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;

    }
    for(int m=0;m<n;m++){
        cout<<arr[m];
    }
}
//stable