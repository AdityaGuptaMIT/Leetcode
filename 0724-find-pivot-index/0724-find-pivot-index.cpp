class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int i, j ;
        int x = 0 ;

        for (i=0 ; i<nums.size() ; i++) {

            int r_sum = 0 ;
            int l_sum = 0 ;

            for (j=i+1 ; j<nums.size() ; j++) {
                r_sum += nums[j] ;
            }

            for (j=i-1 ; j>=0 ; j--) {
                l_sum += nums[j] ;
            }

            if (l_sum == r_sum){
                x = 1 ;
                break ;
            }
        }    

        if (x==1) 
            return i ;
        else
            return -1 ;
    }
};