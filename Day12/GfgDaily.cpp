Link-->https://practice.geeksforgeeks.org/problems/find-n-th-term-of-series-1-3-6-10-15-215506/1?page=2&difficulty=School&sortBy=submissions

Q.Find n-th term of series 1, 3, 6, 10, 15, 21

CODE-->
int k=1;
        int j=1;
        for(int i=1;i<=N;i++){
            k=k+j;
            j++;
        }
        return k-1;
    

Expected Time Complexity: O(1);
Expected Auxiliary Space: O(1);