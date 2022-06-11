/*
Problem: We have to print the given 2D matrix in the spiral order. Spiral
Order means that firstly, first row is printed, then last column is printed,
then last row is printed and then first column is printed, then we will come
inwards in the similar way.

4 variables reqd
row_start(initially 0) (left to ryt jaane mein hellp)
row_end(initially n-1)
column_start(initially 0)
column_end(initially m-1)

4 traversals

row_start+1(start se end tak or isse 1 se badhaya kyunki row 1 traverse karna h)
column_end-1(ek kam as end ke column ko traverse kar rha mtlb ab toh next isse andar wale column ko traverse karega )
row_end-1( -1 as ek row end se traverse)
column_start+1(+1 as start ka ek column traverse karliya )
 ye sab tab tak karenge jab tak:
 row_start<=row_end
 column_start<=column_end

input:
5 6
1 5 7 9 10 11
6 10 12 13 20 21
9 25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 95 105

Spiral order is given by:
1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55
25 29 30 29.
*/
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //spiral order print
    int row_start=0,row_end=n-1,column_start=0,column_end=m-1;
    while(row_start<=row_end  && column_start<=column_end){
        //for row_start
        for(int col=column_start;col<=column_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        //for column_end
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][column_end]<<" ";

        }
        column_end--;
        //for row_end
        for(int col=column_end;col>=column_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        //for column_start
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
    }

}
