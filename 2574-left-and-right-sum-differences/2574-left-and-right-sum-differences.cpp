class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector <int> answer ;

        for (int i=0 ; i<nums.size() ; i++) {
            int r_sum = 0 ;
            int l_sum = 0 ;

            for (int j=i+1 ; j<nums.size() ; j++) {
                r_sum += nums[j] ;
            }

            for (int j=i-1 ; j>=0 ; j--) {
                l_sum += nums[j] ;
            }

            int diff = 0 ;
            if (l_sum >= r_sum)
                diff = l_sum - r_sum ;
            else
                diff = r_sum - l_sum ;

            answer.push_back(diff) ;
        }
        
        return answer ;
    }
};