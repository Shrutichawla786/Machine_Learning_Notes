Q. MinimumNoOfElementsRequiredToGetTargetSum.

#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;
int MinimumNoOfElements(vector<int> arr, int s, int target){
    //base case
    if(target==s){
        return 0;
    }
    if(target<s){
        return INT_MAX; 
    }
    int min = INT_MAX;
    //rr 
    for(int i=0;i<arr.size();i++){
        int ans=MinimumNoOfElements(arr,s+arr[i], target);
        if(ans!=INT_MAX){
           min=ans+1; 
        }
    }
    return min;
    
    
}
int main()
{
    vector<int> arr{1,2};
    int i=0;
    int target=3;
   int ans= MinimumNoOfElements(arr , i , target);
    cout<<ans;

    return 0;
}
