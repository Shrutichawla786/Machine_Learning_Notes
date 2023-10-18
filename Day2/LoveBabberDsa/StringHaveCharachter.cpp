 Q. StringHavingCharachter

#include <iostream>

using namespace std;
bool charfind(string str ,int i , char s){
    //base case
    if(i>=str.length()){
        return false;
    }
    else if(str[i]==s){
        return true;
    }
   return charfind(str ,i+1, s);

    
    
}

int main()
{
    string str="shruti";
    char s='p';
    int i=0;
   bool ans= charfind(str , i , s);
   cout<<ans;

    return 0;
}