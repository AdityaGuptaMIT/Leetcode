class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        
        int splits = 0 ;
        long long int total = 0 ;

        for (int i=0 ; i<nums.size() ; i++) {
            total += nums[i] ;
        }

        long long int l_sum = 0 ;
        
        for (int i=0 ; i<nums.size()-1 ; i++) {
            long long int r_sum = 0 ;
            l_sum += nums[i] ;
            r_sum = total - l_sum ;

            if (l_sum >= r_sum) 
                splits++ ;

        }

        return splits ;
    }
};