class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int i ;
        int carry = 1 ;
        for (i=digits.size()-1 ; i>=0 ; i--) {

            digits[i] += 1 ;

            if (digits[i] > 9) {
                digits[i] = digits[i] % 10 ;
                carry = 1 ;
            }

            else {
                carry = 0 ;
                break ;
            }
       }

       if (i==(-1)) {
            if (carry==1){
                digits.insert(digits.begin(), 1) ;
            }
       }

       return digits ;

    }
};