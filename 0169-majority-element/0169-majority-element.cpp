class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //sb elements ka count mpp map store kra lenge and jiska bhi count size/2 se jayda hoga usko return
        //ordered map use kiya hai nlogn time logn , unordered logn leta hai best case mae
        //mpp ki space complexity O(n) hogi// agr arrray mae saare unique elements honge tb hogaa aisa
        map<int, int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second > nums.size()/2){
                return it.first;
            }
        }
        return -1;
        
    }
};