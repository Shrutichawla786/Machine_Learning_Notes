void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int freq[N]={0};
        for(int i=0;i<N;i++)
        {
            if(arr[i]<=N)
            {
                freq[arr[i]-1]++;
            }
        }
        for(int i=0;i<N;i++)
        {
            arr[i]=freq[i];
        }
    }