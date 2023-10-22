
Q.Given an array arr[] of N integers, calculate the median.

link ---> https://practice.geeksforgeeks.org/problems/find-the-median0527/1?page=1&difficulty[]=-2&sortBy=submissions


CODE---->
		  for(int i=1;i<(v.size()); i++){
		      for(int j=0;j<v.size()-i;j++){
		          if(v[j]>v[j+1]){
		          swap(v[j], v[j+1]);
		      }
		      
		  }
		  }

		  if(v.size()%2==0){
		     int n1= (v.size())/2;
		      int n2=((v.size())/2)-1;
		      return (v[n1]+v[n2])/2;
		      
		  }
		  else{
		      return v[(v.size())/2];
		  }
		

Expected Time Complexity: O(n * log(n))
Expected Space Complexity: O(1)
 