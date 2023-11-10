


#include <iostream>

using namespace std;
void printingarray(int arr[] ,int n  , int i){
    if(i==n){
        return;
    }
    //rr 
    cout<<arr[i]<<" ";
    printingarray(arr , n ,i=i+1);
}

int main()
{
    int arr[6]={20,31,4,3,5,3};
    int n=6;
    int i=0;
    printingarray(arr , n ,i);

    return 0;
}