class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        int ele;
        for(int i=0;i<nums.size();i++){
                if(cnt ==0){
                    cnt=1;
                    ele= nums[i];
                }
                else if(ele == nums[i]){
                    cnt++;
                }
                else{
                    cnt--;
                }

            }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele){
                cnt1++;
            }
        }
        if(cnt1 > nums.size()/2){
            return ele;
        }
        return -1;
        
        // //sb elements ka count mpp map store kra lenge and jiska bhi count size/2 se jayda hoga usko return
        // //ordered map use kiya hai nlogn time logn , unordered logn leta hai best case mae
        // //mpp ki space complexity O(n) hogi// agr arrray mae saare unique elements honge tb hogaa aisa
        // map<int, int>mpp;
        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]++;
        // }
        // for(auto it: mpp){
        //     if(it.second > nums.size()/2){
        //         return it.first;
        //     }
        // }
        // return -1;
        
    }
};