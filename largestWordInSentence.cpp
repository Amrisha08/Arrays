#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n); //for sentence input
    cin.ignore(); //buffer ko clear karta h

    int i=0;
    int currLen=0,maxLen=0;
    int st=0,maxst=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxst=st;
            }
            currLen=0;
            st=i+1;
        }
        else{
            currLen++;
        }
        
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxLen<<endl;
    for(int i=0;i<maxLen;i++){
        cout<<arr[i+maxst];
    }
    return 0;

}