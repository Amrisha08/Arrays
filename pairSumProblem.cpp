//check if there exists two elements in an array such that their sum is equal to given k.
//brute force  O(n^2)
#include<iostream>
#include<climits>
using namespace std;
bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j<<endl;
                return true;
            }

        }
    }
    return false;
}
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int arr[]={2,4,7,11,14,16,20,21};
    //int k=31;
    cout<<pairsum(arr,n,k)<<endl;
    return 0;
    
}

//O(n) in case of sorted array
/*
sort karna padta h array ko fir low or high pointer banayenge 0 index wala low or high last element so pehle low+high if <k the low ko increment but if >k then high decrements.we do this till low<high
*/

#include<iostream>
#include<climits>
using namespace std;
bool pairsum(int arr[],int n, int k){
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
        }
        else if(arr[low]+arr[high]>k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<pairsum(arr,n,k)<<endl;
    return 0;

}