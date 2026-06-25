class Solution {
    public boolean isPalindrome(int x) {
        int n=0 ;
        int rem = 0 ;
        int original = x ;
        int opp = 0 ;
        if (x<0)
            return false ;
        else
        {
            for ( ; x!=0 ; )
            {
                rem = x%10 ;
                x /= 10 ;
                opp = (10*opp) + rem ;
            }
            if (opp == original)
                return true ;
            else
                return false ;
        }
    }
}