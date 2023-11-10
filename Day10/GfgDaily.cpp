LINK--->
https://practice.geeksforgeeks.org/problems/check-if-two-arrays-are-equal-or-not3847/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Arrays&sortBy=submissions

Q.Check if two arrays are equal or not


code--->
  //code here
         sort(A.begin(), A.end());
         sort(B.begin(), B.end());
         for(int i=0;i<N;i++){
             if(A[i]!=B[i]){
                 return false;
             }
         }
         return true;
    


Expected Time Complexity : O(N)
Expected Auxilliary Space : O(N)