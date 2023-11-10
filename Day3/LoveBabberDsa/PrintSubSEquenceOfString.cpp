
Q. PrintSubSequenceOfStringUsingRecursion


#include <iostream>

using namespace std;
void SubSequence(string str ,int i , string output){
    //basecase
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }
    
    //exclude
    
    SubSequence(str, i+1 , output);
    
    //include
    output.push_back(str[i]);
    SubSequence(str ,i+1 , output);
    
    
    
}




int main()
{
    string str="abc";
    int i=0;
    string output="";
    SubSequence(str , i , output);
    

    return 0;
}