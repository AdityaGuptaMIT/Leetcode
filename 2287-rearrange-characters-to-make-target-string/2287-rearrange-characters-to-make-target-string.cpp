class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        int count = 0 ;

        while (true) {

            for (int i=0 ; i<target.size() ; i++) {
                if (s.find(target[i]) != string::npos) {
                    s.erase(s.begin() + s.find(target[i])) ;
                }
                else {
                    return count ;
                }
            }
            count++ ;
        }
    

        return 0 ;
    }
};