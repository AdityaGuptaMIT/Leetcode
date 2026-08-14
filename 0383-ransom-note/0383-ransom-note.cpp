class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        bool found = false ;

        for (int i=0 ; i<ransomNote.size() ; i++) {
            if (magazine.find(ransomNote[i]) != string::npos) {
                found = true ;
                magazine.erase(magazine.begin() + magazine.find(ransomNote[i])) ;
            }
            else {
                found = false ;
                break ;
            }
        }

        return found ;
    }
};