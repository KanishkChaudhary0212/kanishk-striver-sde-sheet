class Solution {
public:
    bool checkPalindrome(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        
            
        return true;
        

    }

    bool validPalindrome(string s) {
        int i=0;
        int j= s.length()-1;

        while(i<=j){
            if( s[i]!= s[j]){
                //ek baar i ko remove or ek baar j ko remove krdo
                // agr i wala remove kr rhe ho toh s[i+1] sey s[j] tk palindrome check hojaye
                // agr j wala remove hojaye toj s[i] sey s[j-1] tk check hoaje
                return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
            }
            else{
                //s[i] == s[j]
                i++;
                j--;
            }
        }
        return true;
        
    }
};
