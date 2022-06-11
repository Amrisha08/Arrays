#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
        for(int i=0;i<n;i++){
            if(key==arr[i]){
                return i;
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
    cout<<linearSearch(arr,n,key);

}
