Q1. SORT COLORS
//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, 
//with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
//You must solve this problem without using the library's sort function.

//Example 1:

//Input: nums = [2,0,2,1,1,0]
//Output: [0,0,1,1,2,2]


link--> https://leetcode.com/problems/sort-colors/description/

code--->
void sortColors(vector<int>& nums) {
    
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<nums.size()-i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j] , nums[j+1]);
                }
            }
        }
        
    }

TimeComplexcity--->o(nlogn);
spacecomplexcity--->o(1);