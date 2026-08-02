    class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int unique = nums[0] ;
            for (int i=0 ; i<nums.size()-1 ; i++) {
                if (unique == nums[i+1]) {
                    nums.erase(nums.begin() + (i+1)) ;
                    i-- ;
                }
                else
                    unique = nums[i+1] ;
            }

            return nums.size() ;
        }
    };