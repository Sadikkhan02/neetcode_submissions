class Solution {
public:
    int findMin(vector<int> &arr) {
        if(arr.size() == 1){
            return arr[0];
        }
        int n = arr.size();
        int lo = 0, hi = n-1, mid = 0, pv = -1;
        int minn = 1002;
        while(lo <= hi){
            mid = (lo + hi)/2;

            if(arr[mid] < arr[0]){
                hi = mid - 1;
                if(minn > arr[mid]){
                    pv = mid;
                    minn = arr[mid];
                }
            }else lo= mid + 1;        
        }
        cout << pv << endl;
        if(pv == -1) return arr[0];
        
        return arr[pv];
    }
};
