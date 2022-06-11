/*
Problem
Given a nxm matrix.
Write an algorithm to find that the given value exists in the matrix or not.
Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.

*/

//brute force

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"matrix is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<"\n";
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"element is found\n";
    }
    else{
        cout<<"element is not found\n";
    }
}

//
/*
kisi num se chota to move left if bada then move neeche

Optimised Approach [IMP]
1. Start from the top right element.
2. You are at (r,c)
if(matrix[r][c] == target)
return true
If (matrix[r][c] > target)
c--
else
r++;

At (r,c), you can go to (r-1,c) or (r,c-1), depending on the value of matrix[i][j]
and target.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int target;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r=0, c=m-1;
    bool found=false;
    while(r<n and c>=0){
        if(mat[r][c]==target){
            found=true;
        }
        if(mat[r][c]>target){
            c--;
        }
        else{
            r++;
        }
        if(found){
            cout<<"element found";
        }
        else{
            cout<<"element not found";
        }
    }
}

