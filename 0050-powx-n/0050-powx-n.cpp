class Solution {
public:
    double myPow(double x, int n) {

        double ans=1 ;
        long long int N = n ;

        if (N<0) {
            N=-N ;
            while (N!=0) {
                
                if (N%2 == 1) {
                    ans = ans * x ;
                }

                x=x*x ;
                N=N/2 ;    
            }

            return 1/ans ;
        }

        else if (N>=0) {
            while (N!=0) {
                
                if (N%2 == 1) {
                    ans = ans * x ;
                }

                x=x*x ;
                N=N/2 ;    
            }

            return ans ;
        }

        return 0 ;
    }

};