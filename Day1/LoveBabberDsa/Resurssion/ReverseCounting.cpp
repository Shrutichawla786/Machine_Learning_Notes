Q2. RverseCounting using Recursion.

#include <iostream>

using namespace std;
void printcounting(int n){
    //base case
    if(n==0){
        return;
    }
    //processing
    cout<<n;
    
    printcounting(n-1);
}

int main()
{
    int n;
    cin>>n;

    printcounting(n);
    return 0;
}