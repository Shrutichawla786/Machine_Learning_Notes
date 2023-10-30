LINK-->
https://practice.geeksforgeeks.org/problems/reverse-digit0316/1?page=1&difficulty=School&sortBy=submissions

Q.Given N,  reverse the digits of N.
 
CODE-->
	long long int ans=0;
        while(n!=0){
            int digit=n%10;
            ans= ((ans*10)+digit);
            n=n/10;
        }
        return ans;


Expected Time Complexity: O(Log(N))
Expected Space Complexity: O(1)