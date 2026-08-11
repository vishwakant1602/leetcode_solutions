class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size() -1;

        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid]== target){
                return mid;
            }
            else if(nums[mid]< target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
//mid calculate ,lekin agar left aur right bahut bade integers hain, toh left + right ki value integer ki maximum limit cross kar sakti hai.
        
    }
};
