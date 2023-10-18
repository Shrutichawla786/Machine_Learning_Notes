Q1. Climbstair



#include<iostream>
using namespace std;
int climbstair(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }
    else if(n==2){
        return 2;
    }
    //rr 
    int ans= climbstair(n-1)+climbstair(n-2);
    return ans;
    
}
int main()
{
    int n;
    cin>>n;

    
    int ans= climbstair(n);
    cout<<ans;
    

    return 0;
}
