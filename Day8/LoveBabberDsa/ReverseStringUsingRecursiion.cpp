

Q. ReverstringUsingRecursion

#include <iostream>
using namespace std;
#include<string>
void reverseString(string &str , int  s , int e){
    //base case
    if(s>=e){
        return ;
    }
    swap(str[s] , str[e]);
    return reverseString(str , s+1 , e-1);
}

int main()
{
    string str;
    cin>>str;
    int n=str.size();
    int s=0;
    int e=n-1;
    reverseString(str , s , e);
    cout<<str;
    return 0;
}


TimeComplexcity--->O(N);
SpaceComplexcity-->O(N);