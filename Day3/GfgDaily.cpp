Q. Given a non null integer matrix Grid of dimensions NxM.Calculate the sum of its elements.


LINK--->https://practice.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix2000/1?page=3&difficulty[]=-2&sortBy=submissions

CODE--->int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        // code here
        int sum=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                sum = sum +Grid[i][j];
            }
        }
        return sum;
    }


    TIME COMPLXCITY--> O(N*M)
    SPACE-->O(1)
