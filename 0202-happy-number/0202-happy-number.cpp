#include <set>
class Solution {
public:
    bool isHappy(int n) {

        set <int> s ;
        
        while (n!=1) {
            int sum = 0 ;
            for ( ; n!=0 ; n=n/10){
                sum = sum + ((n%10)*(n%10)) ;
            }
            n = sum ;
            
            if (s.contains(n))
                return false ;
            else
                s.insert(n) ;            
        }

        return true ;
    }
};