Q. PrintDigitsOfNumber

#include <iostream>
using namespace std;
void printDigits(int n){
    if(n==0){
        return;
    }
    //rr 
    int newvaluesofN= n/10;
    printDigits(newvaluesofN);
    int digit=n%10;
    cout<<digit<<endl;
}

int main()
{
    int n=657;
    if(n==0){
        cout<<0;
    }
    printDigits(n);
    

    return 0;
}
