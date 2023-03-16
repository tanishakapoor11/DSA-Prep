class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int l_sum=0, r_sum=sum;
        for(int i=0;i<nums.size();i++){
            r_sum -= nums[i];
            if(l_sum==r_sum){
                return i;
            }
            l_sum+=nums[i];
        }
        return -1;
    }
};
