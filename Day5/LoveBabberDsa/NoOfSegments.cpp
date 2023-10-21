Q. NoofSegments

#include<iostream>
#include<limits.h>

using namespace std;
int NoOfSegments(int n , int x , int y , int z ){
    //base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

    int a1 =NoOfSegments(n-x , x, y , z)+1;


    int a2=NoOfSegments(n-y , x , y , z)+1;


    int a3=NoOfSegments(n-z , x , y , z)+1;

int ans=max(a1, max( a2 ,a3));
return ans;
}

int main()
{
    int n=7;
    int x=5;
    int y=2;
    int z=2;
    int ans= NoOfSegments(n , x ,  y ,  z);
    if(ans<0){
        ans=0;
    }
    cout<<ans;
    return 0;
}
