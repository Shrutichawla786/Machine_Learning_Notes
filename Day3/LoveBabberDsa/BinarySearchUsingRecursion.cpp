Q. BinarySearchUsingRecursion

#include <iostream>
#include<vector>
using namespace std;

int binarysearchUsingRecursion(vector<int> v , int s , int e , int key ){
    //base case
    if(s>=e){
        return -1;
    }
    int mid= (s+e)/2;
    if(v[mid]==key){
        return mid;
    }
    if(v[mid]<key){
        return binarysearchUsingRecursion(v , mid+1 , e , key);

    }
    else{
        return  binarysearchUsingRecursion(v , s, mid-1 , key);
        
    }
    
    
    
}
int main(){
   vector<int> v{20 , 48 , 28 , 90,5};
   int target=90;
   int n= v.size();
   int s=0;
   int e=n-1;
   int ans = binarysearchUsingRecursion(v , s , e , target);
   cout<<ans;

    return 0;
}