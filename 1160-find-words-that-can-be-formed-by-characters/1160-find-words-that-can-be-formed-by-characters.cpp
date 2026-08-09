class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        string original = chars ;
        int k ;
        int sum = 0 ;

        for (int i=0 ; i<words.size() ; i++) {

            bool found = false ; 

            for (int j=0 ; j<words[i].size() ; j++) {

                if (chars.find(words[i][j]) != string::npos) {
                    found = true ;
                    chars.erase(chars.begin() + chars.find(words[i][j])) ;
                }

                else {
                    found = false ;
                    break ;
                }
            }

            if (found == true) {
                sum = sum + words[i].size() ;
            }

            chars = original ;

        }

        return sum ;
    }
};