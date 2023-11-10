Q. MaxOfArrayUsingRecurssion


#include <iostream>
#include<limits.h>

using namespace std;

void FindMax(int arr[] , int& min , int n , int i){
    //base case
    if(i==n){
        return;
    }
    //rr 
    if(arr[i]>min){
        min=arr[i];
    }
    FindMax(arr , min , n , i+1);
}

int main()
{
    int arr[5]={2,4,1,59,6};
    int min=INT_MIN ;
    int n=5;
    int i=0;
    FindMax(arr , min , n , i);
    cout<<min;
    return 0;
}