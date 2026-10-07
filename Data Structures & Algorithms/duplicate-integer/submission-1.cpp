class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        int numsSize = nums.size();
        for(auto i: nums){
            s.insert(i);
        }

        int setSize = s.size();
        

        if(numsSize > setSize){
            return true;
        }
        else{
            return false;
        }
    }
};
