//arr ka size n+1 lete h as null ke liye null batata h ki woh sentence end hogya


#include<iostream>
#include<climits>
using namespace std;
int main(){
    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<endl;
        i++;
    }

    return 0;
}
//taking input output
#include<iostream>
#include<climits>
using namespace std;
int main(){
    char arr[100];
    cin>>arr;
    cout<<arr; ///to get 3rd character cout<<arr[2]
    return 0;
}

