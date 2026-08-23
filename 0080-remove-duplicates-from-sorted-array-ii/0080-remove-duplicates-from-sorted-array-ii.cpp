class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = nums[0] ;
            for (int i=0 ; i+2<nums.size() ; i++) {

                if (unique == nums[i+1]) {

                
                        if (unique == nums[i+2]) {
                            nums.erase(nums.begin() + (i+2)) ;
                            i-- ;
                        }
                        else {
                            unique = nums[i+2] ;
                            i++ ;
                        }
                    
                }
                
                else
                    unique = nums[i+1] ;
            }

            return nums.size() ;
    }
};