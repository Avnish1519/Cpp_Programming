#include<iostream>//standard library
using namespace std;

int KadanesAlgorithm(int nums[],int n){//Function declared
    

    int maxSubArrSum = nums[0];
    int currSubArrSum  = nums[0];

    for(int i=1;i<n ;i++ ){//using for loop

        currSubArrSum = max(nums[i], currSubArrSum + nums[i]);//current subarray sum 
        maxSubArrSum = max(maxSubArrSum , currSubArrSum);
    }
    return maxSubArrSum;//using return keyword
}
int main(){//main function
    int nums[]={1,-3,2,3,-4};//array
    int n=sizeof(nums)/sizeof(nums[0]);
    int maxSubArray=KadanesAlgorithm(nums,n);
    cout<<maxSubArray<<endl;//printing the outputs
}
