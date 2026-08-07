// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long int mid, low, high ;
        high = n ;
        low = 1 ;

        while (low <= high) {

            mid = (low+high) / 2 ;

            if (isBadVersion(mid) == true)
                high = mid - 1 ;
            
            else if (isBadVersion(mid) == false)
                low = mid + 1 ;
        }
        return low ;
    }
};