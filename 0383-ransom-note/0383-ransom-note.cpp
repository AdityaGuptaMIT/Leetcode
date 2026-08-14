class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        for (int i=0 ; i<ransomNote.size() ; i++) {
            if (magazine.find(ransomNote[i]) != string::npos) {
                magazine.erase(magazine.begin() + magazine.find(ransomNote[i])) ;
            }
            else {
                return false ;
            }
        }

        return true ;
    }
};