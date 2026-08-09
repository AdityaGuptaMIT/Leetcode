class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for (int i=m ; i<nums1.size() ; ) {
            nums1.erase(nums1.begin()+i) ;
        }

        for (int i=0 ; i<nums2.size() ; i++) {
            nums1.push_back(nums2[i]) ;
        }

        for (int i=0 ; i<nums1.size()-1 ; i++) {
            for (int j=0 ; j<nums1.size()-i-1 ; j++) {
                if (nums1[j] > nums1[j+1]) {
                    swap (nums1[j], nums1[j+1]) ;
                }
            }
        }
    }
};