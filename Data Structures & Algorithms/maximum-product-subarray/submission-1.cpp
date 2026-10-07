class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int res = nums[0];
    int p = 1;
        for(int i=0; i<nums.size(); i++){
            p = nums[i];
            res = max(res,p);
            for(int j= 1+i; j<nums.size(); j++){
                p *= nums[j];
                res = max(res,p);
            }
        }

        return res;
    }
};
