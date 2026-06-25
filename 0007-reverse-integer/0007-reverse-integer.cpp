#include <math.h>
class Solution {
public:
    int reverse(int x) {
        long long int rev = 0;
        
        for (; x != 0; x = x / 10) {
            rev = rev * 10 + x % 10;
        }
        
        if ((rev < (-1) * pow(2,31)) || (rev > pow(2,31) - 1))
            return 0;
        else
            return (int)rev;
    }
};