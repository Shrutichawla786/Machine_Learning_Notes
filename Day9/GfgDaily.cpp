LINK--->
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Arrays&sortBy=submissions


Q. Leaders in an array

code--->
   vector<int> ans;
        int max=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(max<=a[i]){
                max=a[i];
                ans.push_back(max);
            }
        }
        int start=0;
        int end=ans.size()-1;
        while (start < end) 
    { 
        int temp = ans[start];  
        ans[start] = ans[end]; 
        ans[end] = temp; 
        start++; 
        end--; 
    }
    return ans;
    
Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)