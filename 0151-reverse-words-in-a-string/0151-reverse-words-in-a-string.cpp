class Solution {
public:
    string reverseWords(string s) {
        string arr[10000] ;
        int i=0, j=0, k=0, count=1 ;

        if (s.empty())
            return s ;

        else {

            for (int x=0 ; s[x] == ' ' ; x++)
                s.erase(x, 1) ;
            
            for (int x=0 ; x<s.size() ; x++) {
                if (s[x] == ' ' && s[x+1] == ' '){
                    s.erase(x, 1) ;
                    x-- ;
                }
            }

            for(int x=s.size()-1 ; s[x] == ' ' ; x--) {
                s.pop_back() ;
            }


            for (k=0 ; k<s.size() ; k++) {

                if (s[k] == ' ' || s[k] == '\0'){
                    i++ ;
                    j=0 ;
                    count++ ;
                }

                else {
                    arr[i] += s[k] ;
                    j++ ;
                }
            }

            s.clear() ;
            k=0 ;
            for (int m=count-1 ; m>=0 ; m--) {
                
                if (arr[m].empty())
                    continue ;
                else {
                    for (int n=0 ; n<arr[m].size() ; n++) {
                    s += arr[m][n] ;
                    }

                    s += ' ' ;
                    k++ ;
                    
                }
            }
            for(int x=s.size()-1 ; s[x] == ' ' ; x--)
                s.pop_back() ;

            return s ;
        }
        return s ;
    }

};