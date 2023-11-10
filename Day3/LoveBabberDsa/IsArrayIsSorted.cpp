Q. ISARRAYISSORTEDUSINGRECURSION.



#include <iostream>
#include<vector>
using namespace std;
bool sortedarray(vector<int> &v, int &n , int i){
    //base case
    if(i==n-1){
        return true;
    }
    
    if(v[i+1]<v[i]){
        return false;
    }
   return  sortedarray(v , n , i+1);
}

int main()
{
    
    vector<int> v{2,4,6,8,9,10};
    int n=v.size();
    int i=0;
    bool issorted=sortedarray(v , n , i);
    if(issorted){
        cout<<"sorted";
    }
    else{
        cout<<"not sorted";
    }
    return 0;
}
