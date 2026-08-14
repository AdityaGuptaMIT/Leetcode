class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        int count = 0 ;
        bool found = true ;

        while (found != false) {

            for (int i=0 ; i<target.size() ; i++) {
                if (s.find(target[i]) != string::npos) {
                    s.erase(s.begin() + s.find(target[i])) ;
                }
                else {
                    return count ;
                }
            }
            found = true ;
            count++ ;
        }
    

        return 0 ;
    }
};