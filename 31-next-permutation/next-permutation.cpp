class Solution {
public:
    // void reverse(vector<int>&nums,int i , int j) {
    //     while(i<=j) {
    //         int temp = nums[i];
    //         nums[i] = nums[j];
    //         nums[j] = temp;
    //         i++;
    //         j--;
    //     }
    // }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
       int idx = -1;
        for(int i=n-2;i>=0;i--) {
            // finding pivot 
             
            if(nums[i]<nums[i+1]) {
                idx = i;
                break;
            }
        }
        if(idx==-1) {
           // reverse(
           reverse(nums.begin(),nums.end());
           return ;
        }
        // sorting/reverese after pivot
        reverse(nums.begin()+idx+1,nums.end());
        // finding just greater element than idx
        int j = -1;
        for(int i=idx+1;i<n;i++) {
            if(nums[i]>nums[idx]) {
                j = i;
                break;
            }
        }
        // swapping idx and idx+1;
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
        return ;
    }
};