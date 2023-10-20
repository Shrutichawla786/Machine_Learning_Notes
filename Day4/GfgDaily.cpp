Q.Given an array A[] of size n. The task is to find the largest element in it.

Link--->https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Arrays&sortBy=submissions


CODE--->
{
 int max=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;
    
}

Time complexcity-->o(n);
space-->o(1);