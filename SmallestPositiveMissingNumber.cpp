/*
Problem

(you are given an array arr[] of N integers including 0.the task is to find the smallest positive number missing from the array.)
Find the smallest positive missing number in the given array.
Example: [0, -10, 1, 3, -20], Ans = 2

Steps to Solve:
1. Build the Check[ ] array initialized with False at all indices.
2. By iterating over the array and marking non-negative a[i] as true i.e.

if(a[i] >= 0)
check[a[i]] = True

3. Iterate in the Check[ ] from i=1, BREAK the loop when you find check[i] =
False and store that i in the ans variable.
4. Output the ans.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    const int N=1e6+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }
        int ans=-1;
        for(int i=0;i<N;i++){
            if(check[i]==false){
                ans=i;
                break;
            }
        }
        cout<<ans<<endl;
    
    
    return 0;
}
//f means woh value aaya hi nhi so 2 upar array mein tha hi nhi so check mein 2 index pe F
