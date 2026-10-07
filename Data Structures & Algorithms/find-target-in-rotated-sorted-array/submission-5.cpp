class Solution {
public:
    int search(vector<int>& nums, int key) {
        if(nums.size() == 1){
            if(nums[0] == key) return 0;
            else return -1;
        }

        int lo = 0;
        int hi = nums.size()-1;
        int first = nums[0], end = nums[hi];
        int mid = (lo + hi)/2;
        int minn = 1002, pv = -1;
        while(lo <= hi){
            mid = (lo + hi)/2;

            if(nums[mid] >= first) lo = mid + 1;
            else {
                if(minn > nums[mid]){
                    minn = nums[mid];
                    pv = mid;
                }
                hi = mid - 1;
            }
        }

        int firstele= nums[0], secondpv = nums[pv-1], fir = nums[pv], en = nums[nums.size()-1];

        cout << pv << " " << firstele << " " << secondpv << " " << fir << " " << en << endl;

        if(pv == -1){
            lo = 0; hi = nums.size()-1;
        }else if(key >= firstele && key <= secondpv){
            lo = 0; hi = pv-1;
        }else{
            lo =pv; hi = nums.size()-1;
        }

        mid = (lo + hi)/2;
        while(lo <= hi){
            mid = (lo + hi)/2;
            if(nums[mid] == key) return mid;

            if(nums[mid] < key) lo = mid+1;
            else hi = mid - 1;
        }
        
        return -1;
    }
};
