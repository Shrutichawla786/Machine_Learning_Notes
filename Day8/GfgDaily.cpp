LINK---->https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1?page=2&difficulty[]=-2&sortBy=


Q. Sum of Digit is Pallindrome or not


CODE-->
    int sum=0;
        while(N>0){
        int last=N%10;
     sum=sum+last;
        N=N/10;
    }
    
    
		   int temp=sum;
		    int rev=0;
		    while(temp>0){
		    rev = rev*10 + temp%10;
            temp = temp/10;
		   
		}
		if(sum==rev){
		    return 1;
		}
		else{
		    return 0;
		  
}



Expected Time Complexity:O(LogN)
Expected Auxillary Space:O(1)