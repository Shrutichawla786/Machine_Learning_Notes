Q3. Nth FIBONACI NO.


#include <iostream>

using namespace std;
int fibo(int n){
    //basecase
    if(n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    //rr 
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n;
    cin>>n;
    int ans=fibo(n);
cout<<ans;
    return 0;
}