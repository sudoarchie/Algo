class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int len = nums.size();
      int i=0;
      while(i< len-1 && nums[len-2-i]>=nums[len-1-i]){
        i++;
      }
      if(i==len -1){
        reverse(nums.begin(),nums.end());
        return;
      }
      int higher =len-1-i;
      for(int j =0; j<=i;j++ ){
        if(nums[len -1-i+j]>nums[len-2-i] && nums[higher] > nums[len-1-i+j]){
            higher = len-1-i+j;
        }
      }
      swap(nums[len-2-i],nums[higher]);
    sort(nums.begin()+(len-1-i),nums.end());
    }
};