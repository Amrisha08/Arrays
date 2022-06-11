
//brute force O(n^3)complexity
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=arr[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;
}

//cumulative sum approach for optimal sol  O(n^2)complexity
/*
eg: array: -1 4 7 2
cumulative sum array: -1 3 10 12 
(-1+4=3, -1+4+7=10....)

for max sum 4+7+2
we can do full array length - 4 ke pehle wala part*/
//ending point tak ka cumulative sum-starting point tak ka=max sum
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currsum[n+1]; //in this curr sum we will store prefix of i
    //i(th) pe zero position se ith position tak ka sum store karega
    currsum[0]=0;
    for(int i=1;i<=n;i++){
        currsum[i]=currsum[i-1]+arr[i-1];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currsum[i]-currsum[j];
            maxSum=max(sum,maxSum);
        }
    }
    cout<<maxSum;
    return 0;

}


//kadane's algo O(n)complexity
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    return 0;
}

//MAXIMUM CIRCULAR SUBARRAY SUM

/* case1 : -1,4,-6,7,5,-4  (here for max subarray the contributing elements does not need rapping)
cas2: 4,-4,6,-6,10,-11,12  (here max subarray is 12 4 -4 6 -6 10 here the contributing elements are rapped up so 
max subarray sum=total sum of array-sum of non contributing elements
therefore we just need to find the non contributing element and that we can find by reversing the sign of all the elements of the array and apply kadane algo to find that element)
*/
#include<iostream>
#include<climits>
using namespace std;
int kadane(int arr[],int n){
    int currentSum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currentSum+=arr[i];
        if(currentSum<0){
            currentSum=0;
        }
        maxSum=max(maxSum,currentSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int wrapsum;
    int nowwrapsum;
    nowwrapsum=kadane(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    wrapsum=totalsum+kadane(arr,n);
    cout<<max(wrapsum,nowwrapsum)<<endl;
    return 0;
}


