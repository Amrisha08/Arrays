/*
Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.

Constraints
1 <= N <= 1000

Sample Input1
A = [
[1,2,3],
[4,5,6],
[7,8,9]
]
N = 3

Sample Output1
A = [
[1,4,7],
[2,5,8],
[3,6,9]
]

Approach
Transpose of a matrix means swapping its rows with columns & columns
with rows. But this swap is to be done only for the upper triangle of a matrix

i.e. swap half of the elements of the diagonally upper half of the matrix with
the diagonally lower half once. In this, each (row, col) & (col, row) pair will
be swapped exactly once and the transpose of the square matrix could be
obtained.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            //swap
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}