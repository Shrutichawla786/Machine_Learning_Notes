Link--->https://practice.geeksforgeeks.org/problems/palindrome0746/1?page=1&difficulty[]=-2&sortBy=submissions


Q.Given an integer, check whether it is a palindrome or not.

code-->
	{
		    int temp= n;
		    int rev=0;
		    while(temp>0){
		    rev = rev*10 + temp%10;
            temp = temp/10;
		   
		}
		if(n==rev){
		    return "Yes";
		}
		else{
		    return "No";
		}
Expected Time Complexity: O(x)
Expected Space Complexity: O(x) where x is number of digits in n.