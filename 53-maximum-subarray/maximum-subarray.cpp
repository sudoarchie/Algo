class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = nums[0];
        int len = nums.size();
        int sum =0;
        for(int i =0; i< len; i++){
            sum = sum +  nums[i];
            if(max < sum ){
                max = sum ;
            }
            if(sum<0){
                sum =0;
            }
        }
        return max;
    }
};