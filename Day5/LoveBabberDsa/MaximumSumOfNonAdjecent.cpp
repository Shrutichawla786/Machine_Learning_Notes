#include <iostream>
#include<vector>
#include<limits.h>

using namespace std;

int maxsum(vector<int>&arr , int sum , int maxi , int i){
    //base case

    if(i>=arr.size()){
        maxi = max(sum , maxi);
        return maxi;
    }
    //include
    return maxsum(arr ,sum+arr[i] ,maxi , i+2 );
    
    //exclude
    return  maxsum(arr ,sum ,maxi , i+1);
}

int main()
{
    vector<int> v{1,2,3,1,3,5,8,1,9};
    int sum =0;
    int maxi=INT_MIN;
    int i=0;
    int res = maxsum(v , sum , maxi , i);
    cout<<res;
    

    return 0;
}