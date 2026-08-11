class Solution {
public:
    bool isPerfectSquare(int num) {

        long int mid ;
        long int high = num ;
        long int low = 1 ;

        while (low <= high) {

            mid = (low+high)/2 ;

            if (mid*mid == num) 
                return true ;

            else if (mid*mid < num) 
                low = mid+1 ;

            else if (mid*mid > num)
                high = mid-1 ;
        }

        return false ;

    }
};